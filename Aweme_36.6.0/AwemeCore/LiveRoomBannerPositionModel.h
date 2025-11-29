@class NSDictionary, NSString, IESLiveBannerListModel;

@interface LiveRoomBannerPositionModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveBannerListModel *topLeft;
@property (retain, nonatomic) IESLiveBannerListModel *topRight;
@property (retain, nonatomic) IESLiveBannerListModel *bottomRight;
@property (retain, nonatomic) IESLiveBannerListModel *giftPanel;
@property (retain, nonatomic) IESLiveBannerListModel *giftPaneBottomRight;
@property (retain, nonatomic) IESLiveBannerListModel *openLive;
@property (retain, nonatomic) IESLiveBannerListModel *gameLiveMiddle;
@property (retain, nonatomic) IESLiveBannerListModel *activityTopRight;
@property (retain, nonatomic) IESLiveBannerListModel *activityVSInteract;
@property (retain, nonatomic) IESLiveBannerListModel *liveScene;
@property (retain, nonatomic) IESLiveBannerListModel *activityInteract;
@property (retain, nonatomic) IESLiveBannerListModel *retainConsult;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
