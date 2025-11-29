@interface WCEventTrackingSystemConfig : NSObject

@property (nonatomic) BOOL openEventTacking;
@property (nonatomic) BOOL trackUIButton;
@property (nonatomic) BOOL trackRichTextView;
@property (nonatomic) BOOL trackTableViewCell;
@property (nonatomic) BOOL trackAlert;
@property (nonatomic) BOOL trackUISwitch;

+ (id)defaultConfig;

@end
