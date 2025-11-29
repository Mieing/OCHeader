@interface AWEKnowledgeSwiftImpl.KnowledgeModuleServiceImpletion : HTSService <AWEKnowledgeModuleService> {
    void /* unknown type, empty encoding */ searchSchemaPrefix;
}

- (void)setupRecommendFullPageTransmissionWithPayload:(id)a0;
- (void)setupRecommendAlbumTransmissionWithPayload:(id)a0;
- (void)setupProfileFullPageTransmissionWithPayload:(id)a0;
- (id)processEmoticonList:(id)a0 model:(id)a1;
- (void)onFinishCommentInputViewWillShowWithModel:(id)a0;
- (Class)trackingManager;
- (BOOL)isFollowShootCameraSchema:(id)a0;
- (void)setCurrentFollowShootChoosePopupDelegate:(id)a0;
- (BOOL)isFollowShootChoosePopupSchema:(id)a0;
- (BOOL)pitayaDataVerifyEnable;
- (void)pitayaDataVerifyWith:(id)a0 params:(id)a1;
- (id)getTemplateFeatureList;
- (id)ugcTopicSchemaMergeMaterialInfo:(id)a0 awemeModel:(id)a1;
- (id)ugcTopicSchemaMergeSearchTrack:(id)a0 awemeModel:(id)a1;
- (id)getProductGenreInfoParamsWithAweme:(id)a0;
- (id)createTopicShootButtonWithStyleName:(id)a0;
- (id)getTopicUserBehaviorRecordRecentVideoPlayItemIdList;
- (id)getTopicUserBehaviorRecordPublishContentSourceList;
- (void)showFollowShootChoosePopupWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
