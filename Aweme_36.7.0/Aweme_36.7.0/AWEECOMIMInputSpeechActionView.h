@class UIImageView, UILabel;

@interface AWEECOMIMInputSpeechActionView : UIView

@property (retain, nonatomic) UIImageView *bkgImageView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (struct CGSize { double x0; double x1; })actionViewSize;

- (void)setupWithActionType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithActionType:(long long)a0;
- (void)onTap:(id)a0;

@end
