@class NSString;

@interface AWELivePhotoResourceTabConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useCache;
@property (nonatomic) unsigned long long disableCacheDefaultMode;
@property (nonatomic) unsigned long long emptyCacheDefaultMode;
@property (nonatomic) unsigned long long multiAssetsDefaultMode;
@property (readonly, nonatomic) unsigned long long willingToShowMode;
@property (readonly, nonatomic) BOOL videoFormatInAIClip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)makeDecisionWithMemory:(unsigned long long)a0 multiAssets:(BOOL)a1;

@end
