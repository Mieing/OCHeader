@class NSString, UIColor;

@interface WCColorProxy : NSObject

@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) NSString *brandColorReplacement;
@property (retain, nonatomic) UIColor *brandColor;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)secondaryLabelColor;
- (id)seperatorColor;
- (id)forwardingRealColor;
- (id)forwardingBrandColor;
- (id)colorInCurrentUserInterfaceStyle:(id)a0;
- (void).cxx_destruct;

@end
