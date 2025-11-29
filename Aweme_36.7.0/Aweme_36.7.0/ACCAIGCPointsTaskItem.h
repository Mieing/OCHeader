@class CKGenericTemplateModel, AWENewFaceStickerModel, IESEffectModel, AWEAIGCAIAssetTask;

@interface ACCAIGCPointsTaskItem : NSObject

@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (retain, nonatomic) AWENewFaceStickerModel *stickerModel;
@property (retain, nonatomic) AWEAIGCAIAssetTask *task;

- (void).cxx_destruct;

@end
