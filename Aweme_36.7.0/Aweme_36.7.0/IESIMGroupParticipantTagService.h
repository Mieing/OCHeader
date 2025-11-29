@interface IESIMGroupParticipantTagService : HTSService <IESIMGroupParticipantTagService> {
    void /* unknown type, empty encoding */ abValueMap;
}

- (id)getTagContainerViewWithConID:(id)a0 secUid:(id)a1 scene:(long long)a2;
- (id)getTagContainerView:(id)a0 tagLevel:(id)a1 scene:(long long)a2;
- (id)getTagContainerView:(id)a0 scene:(long long)a1;
- (id)getTagContainerView;
- (void)openTagDescribePopup:(id)a0 enterFrom:(id)a1;
- (void)openTagSettingPage:(id)a0 enterFrom:(id)a1;
- (void)needUpdateABValue:(id)a0 ownerID:(id)a1;
- (BOOL)isNewTagFeatureEnable:(id)a0;
- (unsigned long long)tagSwitchStatus:(id)a0;
- (BOOL)isTagSwitchEnable:(id)a0;
- (id)chosenTagKey:(id)a0 needOriginValue:(BOOL)a1;
- (BOOL)isExpired:(id)a0 cid:(id)a1 tagKey:(id)a2;
- (id)getNameWithCid:(id)a0 tagKey:(id)a1;
- (void)saveTagNameWithCid:(id)a0 tagItemList:(id)a1;
- (id)getCurrentDate;
- (id)conTagExtJsonStr:(id)a0;
- (void)updateConTagExt:(id)a0 con:(id)a1 completion:(id /* block */)a2;
- (BOOL)isNeedAuthorize:(id)a0;
- (void)openAuthorizedPopup:(id)a0 tagItem:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (BOOL)isMemberTagSwitchEnable:(id)a0;
- (void)updateMemberTagSetting:(id)a0 con:(id)a1 completion:(id /* block */)a2;
- (BOOL)supportMemberTagPersonalSwitch;
- (id)addParamsToBannerScheme:(id)a0 con:(id)a1;
- (void)openTagDetailPageWithModel:(id)a0;
- (void)logInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
