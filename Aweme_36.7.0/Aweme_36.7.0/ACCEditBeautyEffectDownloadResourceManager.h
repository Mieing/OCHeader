@class AWEEditerBeautyDataManager, ACCEditBeautyEffectDataManager;

@interface ACCEditBeautyEffectDownloadResourceManager : NSObject

@property (retain, nonatomic) ACCEditBeautyEffectDataManager *dataManager;
@property (retain, nonatomic) AWEEditerBeautyDataManager *beautyDataManager;

+ (id)shareInstance;

- (void).cxx_destruct;
- (void)reset;

@end
