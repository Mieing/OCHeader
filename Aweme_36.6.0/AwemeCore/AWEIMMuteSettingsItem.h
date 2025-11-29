@class NSString;

@interface AWEIMMuteSettingsItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isOn;
@property (nonatomic) long long mask;

+ (id)itemWithTitle:(id)a0 mask:(long long)a1 isOn:(BOOL)a2;

- (void).cxx_destruct;

@end
