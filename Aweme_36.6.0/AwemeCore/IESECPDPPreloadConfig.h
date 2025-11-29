@class NSDictionary, NSString;

@interface IESECPDPPreloadConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *aheadScene;
@property (nonatomic) long long maxCacheSize;
@property (nonatomic) long long maxPreloadNum;
@property (nonatomic) BOOL disableLowerDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
