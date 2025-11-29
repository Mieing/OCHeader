@class NSString, UIImageView, UIImage, UILabel, UISwitch;

@interface HTSLiveScreenRecordFunctionView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) id /* block */ touchHandle;
@property (nonatomic) BOOL needToShowSwitch;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UISwitch *switchControl;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;
- (id)init;
- (void)switchTapped;
- (void)tapAction;

@end
