@class NSString, UIImage;

@interface AWEIMGroupSpeakModeItemViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *tailImage;
@property (retain, nonatomic) UIImage *leadingImage;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;

@end
