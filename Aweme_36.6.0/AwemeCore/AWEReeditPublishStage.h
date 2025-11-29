@class AWEPublishCreateModelParamContext, NSString, AWEUploadCoverResourceModel, AWEPublishFlowModel, NSError, AWEPublishCreateModelParamManager, AWEVideoPublishViewModel;

@interface AWEReeditPublishStage : AWEPublishBaseStage {
    AWEPublishFlowModel *_flowModel;
}

@property (weak, nonatomic) id requestToken;
@property (retain) NSError *lastError;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *originImageInfos;
@property (retain, nonatomic) AWEPublishCreateModelParamManager *paramManager;
@property (retain, nonatomic) AWEPublishCreateModelParamContext *paramContext;
@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) AWEUploadCoverResourceModel *uploadCoverResourceModel;

+ (Class)aACCMidVideoCreationProtocolClass;
+ (unsigned long long)poiEditType:(id)a0;
+ (BOOL)isAddPoiList:(id)a0;
+ (unsigned long long)anchorEditType:(id)a0;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)p_mergePublishParams:(id)a0 toDict:(id)a1;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)aACCMidVideoCreationProtocol;
- (BOOL)enableReeditUseNewCover;
- (long long)anchorListRequestItemType;
- (void)finalEndHandler:(id)a0;
- (void)reeditPublishWithCompletion:(id /* block */)a0;
- (id)buildParameter;
- (void)trackEventWithParams:(id)a0;
- (id)buildAnchorInfoParameter;
- (id)buildVideoInfoParameter;
- (id)buildImagesInfoParameter;
- (id)buildMusicInfoParameter;
- (id)buildStickerInfoParameter;
- (id)buildOtherInfoParameter;
- (id)buildReeditImageInfoParameterIfNeeded;
- (id)buildReeditInteractionStickerParameterIfNeeded;
- (id)buildReeditMusicInfoParameterIfNeeded;
- (id)filterEmptyValueWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)run;
- (void)dealloc;

@end
