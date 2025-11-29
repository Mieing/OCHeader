@class NSString, LSSDomain, NSDictionary, NSArray, NSLock;

@interface LSSNode : NSObject {
    NSLock *_nodeLock;
}

@property (retain, nonatomic) LSSDomain *domain;
@property (copy, nonatomic) NSDictionary *configInfo;
@property (readonly, copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSArray *IPs;
@property (copy, nonatomic) NSDictionary *nodeInfo;
@property (copy, nonatomic) NSDictionary *nativeInfo;
@property (readonly, copy, nonatomic) LSSDomain *lssDomain;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)nodeWithDomain:(id)a0 configInfo:(id)a1;
+ (id)nodeWithNativeInfo:(id)a0 commonInfo:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
