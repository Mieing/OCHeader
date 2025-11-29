@class IESLiveEcOpenVideoPostEditerPostMaterialModel, IESLiveEcOpenVideoPostEditerCommentInfoModel;

@interface IESLiveEcOpenVideoPostEditerParamModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveEcOpenVideoPostEditerCommentInfoModel *commentInfo;
@property (nonatomic) BOOL isShowPanel;
@property (retain, nonatomic) IESLiveEcOpenVideoPostEditerPostMaterialModel *postMaterial;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
