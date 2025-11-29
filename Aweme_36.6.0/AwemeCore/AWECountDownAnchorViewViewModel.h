@class NSString, UIFont, UIColor;

@interface AWECountDownAnchorViewViewModel : NSObject

@property (nonatomic) unsigned long long stage;
@property (copy, nonatomic) NSString *currentText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInset;
@property (copy, nonatomic) NSString *backGroundImgURL;
@property (copy, nonatomic) NSString *finishImageURL;

- (void).cxx_destruct;

@end
