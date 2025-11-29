@class NSString;

@interface AWEDataLayerKVAccessConfig : NSObject <AWEDataLayerKVAccessConfigProtocol>

@property (nonatomic) unsigned long long cacheOptions;
@property (nonatomic) unsigned long long freshnessTime;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL defaultBool;
@property (nonatomic) long long defaultInteger;
@property (nonatomic) double defaultDouble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
