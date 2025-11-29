@class AWEStudioEditStickerFeatureConfig, NSString, AWEVideoPublishViewModel;
@protocol ACCStickerPannelFilterDataSource;

@interface ACCStickerPannelFilterImpl : NSObject <ACCStickerPannelFilter>

@property (weak, nonatomic) id<ACCStickerPannelFilterDataSource> dataSource;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) AWEStudioEditStickerFeatureConfig *featureConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEMainModuleServiceDOUYINJXAdapterClass;

- (BOOL)isTeenMode;
- (BOOL)isCommerce;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEMainModuleServiceDOUYINJXAdapter;
- (id)filterTags;
- (BOOL)isAlbumImage;
- (BOOL)isIMPhoto;
- (BOOL)isInfiniImagePrefferd;
- (id)ultraCreationBlockStickers;
- (id)fansInteractionStickerTags;
- (void).cxx_destruct;

@end
