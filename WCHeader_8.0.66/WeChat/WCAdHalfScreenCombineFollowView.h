@class WCAdURLImageView, WCAdCombineFollowInfo, WCAdFollowItemView, NSString, MMUILabel;
@protocol WCAdHalfScreenCombineFollowViewDelegate;

@interface WCAdHalfScreenCombineFollowView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, WCAdFollowItemViewDelegate>

@property (retain, nonatomic) WCAdCombineFollowInfo *combineFollowInfo;
@property (nonatomic) BOOL isBrandFollowed;
@property (nonatomic) BOOL isFinderFollowed;
@property (retain, nonatomic) WCAdURLImageView *headImageView;
@property (retain, nonatomic) MMUILabel *headTitleLabel;
@property (retain, nonatomic) WCAdFollowItemView *brandFollowItemView;
@property (retain, nonatomic) WCAdFollowItemView *finderFollowItemView;
@property (weak, nonatomic) id<WCAdHalfScreenCombineFollowViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCombineFollowInfo:(id)a0 isBrandFollowed:(BOOL)a1 isFinderFollowed:(BOOL)a2;
- (void)initSubview;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)genDividerView:(double)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onCheckStateChanged:(id)a0;
- (void).cxx_destruct;

@end
