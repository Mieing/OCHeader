@class NSString, NSDictionary, NSArray, NSMutableSet, NSOperation, NSLock;

@interface NPNode : NSObject {
    NSLock *_nodeLock;
}

@property (readonly, copy, nonatomic) NSDictionary *IPMapItem;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSArray *IPs;
@property (copy, nonatomic) NSDictionary *schedulingInfo;
@property (copy, nonatomic) NSArray *optimizedNodeIPs;
@property (copy, nonatomic) NSMutableSet *connectedIPs;
@property (readonly, copy, nonatomic) NSDictionary *nodeInfo;
@property (readonly, nonatomic) NSOperation *operation;
@property (readonly, nonatomic) BOOL shouldUseHTTPDNS;

+ (id)nodeWithHost:(id)a0 IPs:(id)a1 schedulingInfo:(id)a2;

- (id)initWithHost:(id)a0 IPs:(id)a1 schedulingInfo:(id)a2;
- (void)updateWithIPs:(id)a0 schedulingInfo:(id)a1;
- (int)preConnect:(id)a0;
- (id)randomIP;
- (void).cxx_destruct;
- (id)description;

@end
