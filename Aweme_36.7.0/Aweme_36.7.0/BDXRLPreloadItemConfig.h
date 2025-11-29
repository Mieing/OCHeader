@class NSString, BDXPreloadStrategy;

@interface BDXRLPreloadItemConfig : NSObject <BDXPreloadConfigItemProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL enableMemory;
@property (nonatomic) long long expire;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;
@property (nonatomic) double expireStart;
@property (nonatomic) double expireEnd;
@property (copy, nonatomic) NSString *memoryPriority;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL serial;
@property (copy, nonatomic) NSString *gurdChannel;
@property (nonatomic) BOOL isHighEfficiency;
@property (copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
