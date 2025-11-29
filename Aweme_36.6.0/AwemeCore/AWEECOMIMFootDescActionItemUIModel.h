@class NSString, AWEECOMIMFootDescActionItemButtonStyle;

@interface AWEECOMIMFootDescActionItemUIModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) int buttonStatus;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int switchButtonStatus;
@property (copy, nonatomic) NSString *switchText;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonStyle *buttonStyle;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonStyle *switchButtonStyle;

- (void).cxx_destruct;

@end
