@class NSString;

@interface AWEIMHalfScreenMuteSettingsCellViewModel : NSObject

@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property BOOL isSelected;
@property struct CGSize { double width; double height; } cellSize;
@property BOOL shouldDisplayMutingFilterEntry;
@property BOOL shouldHidenLineView;
@property long long settingType;
@property long long cellStyle;
@property long long shapeStyle;

- (void).cxx_destruct;
- (void)calculateSize;

@end
