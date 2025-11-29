@class NSString, UIImage, UIColor;

@interface BrandCustomSharePanelAction : NSObject

@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSString *iconKey;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *iconTintColor;
@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) BOOL isDisabled;

- (void).cxx_destruct;

@end
