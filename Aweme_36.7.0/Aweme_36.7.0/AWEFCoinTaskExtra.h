@class NSString;

@interface AWEFCoinTaskExtra : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needRetry;
@property (nonatomic) BOOL coinStop;
@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *logid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
