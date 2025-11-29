@class UIColor, NSArray, NSString;
@protocol AWEIMImageProtocol;

@interface AWEIMSwitchCFBubbleColorSingleViewConfig : NSObject

@property (retain, nonatomic) UIColor *ownBackgroundColor;
@property (copy, nonatomic) NSArray *avatarUrls;
@property (copy, nonatomic) NSString *descString;
@property (retain, nonatomic) id<AWEIMImageProtocol> keyProvider;

- (void).cxx_destruct;

@end
