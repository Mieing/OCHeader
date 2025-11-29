@class UIImageView, AWENoticeSchemaStructModel, UIView, UILabel;
@protocol AWEIMNoticeCellDetailAreaDelegate;

@interface AWEIMNoticeCellDetailArea : UIView

@property (retain, nonatomic) AWENoticeSchemaStructModel *model;
@property (retain, nonatomic) UIView *topSeparateLine;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *leftText;
@property (retain, nonatomic) UILabel *rightText;
@property (retain, nonatomic) UIImageView *jumpIcon;
@property (weak, nonatomic) id<AWEIMNoticeCellDetailAreaDelegate> delegate;

+ (double)leftIconWidth;
+ (double)bottomAreaHeight;
+ (double)topSeparateLineHeight;
+ (double)jumpIconWidth;
+ (double)offsetBetweenLeftIconAndText;
+ (double)marginWidth;
+ (double)totalHeight;

- (void)awe_themeDidChange:(long long)a0;
- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (void)configLeftIconWithModel:(id)a0;
- (void)configLeftTextWithModel:(id)a0;
- (void)configRightTextWithModel:(id)a0;
- (void)configLeftIconImageWithModel:(id)a0;
- (void)configLeftIconLayoutWithModel:(id)a0;
- (void)onGotoDetailCustomAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addLayoutConstraints;

@end
