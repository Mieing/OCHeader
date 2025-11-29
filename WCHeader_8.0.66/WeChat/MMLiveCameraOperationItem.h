@class UIImage, NSString;

@interface MMLiveCameraOperationItem : NSObject

@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *secondaryLabel;
@property (retain, nonatomic) NSString *badgeText;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSString *redDotPath;
@property (retain, nonatomic) NSString *alternativeRedDotPath;
@property (retain, nonatomic) NSString *customAccessibilityLabel;

- (void).cxx_destruct;

@end
