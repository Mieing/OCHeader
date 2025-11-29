@class NSString, UIImage, AWEURLModel;

@interface AWESearchSideBarNotificationCardHeaderTitleIconConfig : NSObject

@property (retain, nonatomic) AWEURLModel *iconModel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *iconAccessibilityLabel;
@property (retain, nonatomic) UIImage *placeHoldImage;

- (void).cxx_destruct;

@end
