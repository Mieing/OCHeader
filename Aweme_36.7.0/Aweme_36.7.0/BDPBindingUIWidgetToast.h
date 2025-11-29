@class NSString, NSNumber;

@interface BDPBindingUIWidgetToast : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *mask;

- (void).cxx_destruct;

@end
