@class NSString;

@interface AWEIMHalfScreenMuteFilterSettingsCellViewModel : NSObject

@property (copy) NSString *title;
@property BOOL isSelected;
@property BOOL shouldHidenLineView;
@property long long maskType;
@property (readonly) BOOL isChooseSwitch;
@property long long cellStyle;

- (void).cxx_destruct;

@end
