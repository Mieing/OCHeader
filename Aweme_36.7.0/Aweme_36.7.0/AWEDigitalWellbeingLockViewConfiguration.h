@class NSString;

@interface AWEDigitalWellbeingLockViewConfiguration : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *hint;
@property (nonatomic) BOOL appealOnly;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (nonatomic) BOOL shouldShowHelpAndSettingButton;
@property (copy, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;
- (id)init;

@end
