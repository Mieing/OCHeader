@class UIColor, NSArray, UIImageView, UILabel, UIView;

@interface WXGRoamBackupPackageDetailCell : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) UILabel *prefix;
@property (retain, nonatomic) UIImageView *arrowImg;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (retain, nonatomic) NSArray *bottomSubTitleViews;
@property (retain, nonatomic) UIView *seperator1;
@property (nonatomic) unsigned long long seperateType;
@property (nonatomic) double additionalHeight;

- (id)initWithTitle:(id)a0 subTitle:(id)a1 seperateType:(unsigned long long)a2 width:(double)a3;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 seperateType:(unsigned long long)a2 width:(double)a3 showArrow:(BOOL)a4;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 seperateType:(unsigned long long)a2 width:(double)a3 showArrow:(BOOL)a4 showPrefix:(BOOL)a5 subTitleColor:(id)a6;
- (void)updateSeperator;
- (void)setSubTitle:(id)a0;
- (void)setSubTitleAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)setEnabled;
- (void)setEnabled:(BOOL)a0;
- (void)removeBottomSubTitleViews;
- (void)setBottomSubTitles:(id)a0;
- (void).cxx_destruct;

@end
