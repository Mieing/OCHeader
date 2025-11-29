@class UIStackView, AWEECOMIMFooterCareNoticeButton, UITapGestureRecognizer, NSString, NSDictionary, AWEECOMIMPageTrackUtil, YYLabel, AWEECOMIMFooterMemberView, AWEECOMIMFooterTipsModel;
@protocol AWEECOMIMFooterDescViewDelegate;

@interface AWEECOMIMFooterDescView : UIView

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) AWEECOMIMFooterCareNoticeButton *switchBtn;
@property (retain, nonatomic) AWEECOMIMFooterMemberView *memberView;
@property (retain, nonatomic) UITapGestureRecognizer *btnTap;
@property (readonly, nonatomic) AWEECOMIMFooterTipsModel *model;
@property (nonatomic) long long alignment;
@property (weak, nonatomic) id<AWEECOMIMFooterDescViewDelegate> delegate;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly, copy, nonatomic) NSDictionary *footerTrackInfo;
@property (readonly, copy, nonatomic) NSString *locationSubType;
@property (readonly, nonatomic) BOOL withTransHuman;
@property (readonly, copy, nonatomic) NSString *tipsTypeString;

+ (double)contentHeightWithType:(unsigned long long)a0;

- (BOOL)withTransHuman;
- (id)tipsTypeString;
- (void)setModel:(id)a0 userConfig:(id)a1 showSwitchHuman:(BOOL)a2;
- (void)modifyUserConfig;
- (id)buttonStyleWithButtonStatus:(int)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
