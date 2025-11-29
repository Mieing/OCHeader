@class AWEMusicDetailInspirationTemplateResponseModel, AWECodeGenCommonEntranceResponseModel, AWEMusicDetailInspirationPropResponseModel, AWEMusicDetailInspirationQuickFlashResponseModel;

@interface AWEMusicDetailInspirationToolsResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicDetailInspirationPropResponseModel *propResponseModel;
@property (retain, nonatomic) AWEMusicDetailInspirationQuickFlashResponseModel *quickFlashResponseModel;
@property (retain, nonatomic) AWEMusicDetailInspirationTemplateResponseModel *templateReponseModel;
@property (retain, nonatomic) AWECodeGenCommonEntranceResponseModel *commonEntranceReponseModel;

+ (id)templateBodyModelJSONTransformer;
+ (id)quickFlashResponseModelJSONTransformer;
+ (id)templateReponseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
