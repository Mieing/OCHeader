@class UIColor, NSString, CAAnimation, UIImage, AWEURLModel;

@interface AFDUserWorkCellViewModel : NSObject

@property (retain, nonatomic) AWEURLModel *coverImageURL;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL canSmartCrop;
@property (copy, nonatomic) NSString *promptText;
@property (copy, nonatomic) UIImage *promptIcon;
@property (retain, nonatomic) CAAnimation *promptIconAnimation;
@property (retain, nonatomic) UIColor *maskColor;

- (void).cxx_destruct;

@end
