@class NSString, UIImage;

@interface AWEIMCommonTopFloatViewConfig : NSObject

@property (copy, nonatomic) NSString *tipsText;
@property (copy, nonatomic) NSString *actionButtonText;
@property (retain, nonatomic) UIImage *actionButtonIcon;
@property (retain, nonatomic) UIImage *closeButtonIcon;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void).cxx_destruct;

@end
