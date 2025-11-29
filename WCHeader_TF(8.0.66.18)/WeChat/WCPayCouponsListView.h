@class WCPayControlData, NSString, UIImageView, WCPayFavorComposeInfo, UILabel, NSMutableArray, UIButton;
@protocol WCPayCouponsListViewDelegate;

@interface WCPayCouponsListView : MMUIView <CAAnimationDelegate> {
    WCPayFavorComposeInfo *m_oOldSelectedComposeInfo;
    UIImageView *m_backgroundView;
    UIButton *comleteButton;
    UILabel *topTitleLabel;
    NSMutableArray *m_arrCouponsView;
    NSMutableArray *m_arrFilterTradeFavInfo;
    WCPayControlData *m_data;
    id<WCPayCouponsListViewDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)is_open_field_area;
- (BOOL)useChangeCardViewV2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 delegate:(id)a2;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)a0;
- (void)onCancelButtonDone;
- (void)OnSelectedFavor:(id)a0;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void).cxx_destruct;

@end
