@class UIStackView, AWEUserListGeneralCellInsetsLabel, NSString, UILabel, UIView, YYLabel;
@protocol AWEUserListGeneralCellConfigProtocol;

@interface AWEUserListGeneralCellTitleView : UIView <AWEUserListGeneralCellComponentProtocol>

@property (retain, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) AWEUserListGeneralCellInsetsLabel *relationLabel;
@property (retain, nonatomic) UIView *streakView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)titleLineHeightWithConfig:(id)a0 width:(double)a1;
+ (double)subtitleHeightWithConfig:(id)a0 width:(double)a1;
+ (double)calculateHeightWithConfig:(id)a0 width:(double)a1;

- (void)initView;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
