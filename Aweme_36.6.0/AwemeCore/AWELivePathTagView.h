@class NSString, UIImageView, UILabel, UIView;

@interface AWELivePathTagView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSString *liveType;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ tapBlock;

- (double)iconSizeWH;
- (void)updateByTitle:(id)a0 fontSize:(double)a1;
- (void)updateByTitle:(id)a0;
- (void)updateWithLargeFontAdaptByTitle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)defaultFontSize;
- (void)tapAction;
- (void)initUI;

@end
