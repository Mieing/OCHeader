@class UIView, IESLiveUserCardStore, NSString, IESLiveGiftExhibitionBanner, UIImageView, IESLiveProfileBusinessArea, HTSLiveAmazingBackgroundView, IESLiveHonorWallElement;

@interface IESLiveUserCardFansGroupOrVIPView : UIView <IESLiveUserCardHonorWallViewProtocol>

@property (nonatomic) BOOL twoElementMode;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveProfileBusinessArea *businessArea;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *giftExhibitionData;
@property (retain, nonatomic) IESLiveHonorWallElement *fansGroupElement;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *fansGroupBackgroundColorView;
@property (retain, nonatomic) UIView *fansGroupInfo;
@property (retain, nonatomic) UIView *fansGroupStatus;
@property (retain, nonatomic) UIImageView *fansGroupRightImageView;
@property (retain, nonatomic) IESLiveHonorWallElement *vipElement;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *vipBackgroundColorView;
@property (retain, nonatomic) UIView *vipInfo;
@property (retain, nonatomic) UIView *vipStatus;
@property (retain, nonatomic) UIImageView *vipRightRightImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getViewHeight;
- (void)doFansGroupTapped;
- (id)fansGroupBackgroundPath;
- (id)vipBackgroundPath;
- (void)doVIPTapped;
- (id)createColors:(id)a0;
- (BOOL)showCurrentAnchorPage;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)textColor;
- (void)setupUI;
- (double)containerWidth;

@end
