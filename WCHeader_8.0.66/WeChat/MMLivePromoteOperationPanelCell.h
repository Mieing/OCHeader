@class NSString, UIImageView, UILabel, UIView;

@interface MMLivePromoteOperationPanelCell : UIButton

@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) UIView *customizedBackgroundView;
@property (retain, nonatomic) UIImageView *customizedUIImageView;
@property (retain, nonatomic) UILabel *customizedTitleLabel;
@property (retain, nonatomic) UILabel *customizedStateTextLabel;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *svgIconName;
@property (readonly, copy, nonatomic) NSString *stateText;
@property (nonatomic) BOOL isCellViewDisabled;

- (id)initWithTitle:(id)a0 svgIconName:(id)a1;
- (id)initWithTitle:(id)a0 svgIconName:(id)a1 stateText:(id)a2;
- (void)layoutSubviews;
- (BOOL)updateStateText:(id)a0;
- (void).cxx_destruct;

@end
