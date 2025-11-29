@class UIColor, NSAttributedString, NSString;

@interface CJPayLabel : UILabel <CJPayStandardLocalThemeAdapterProtocol>

@property (retain, nonatomic) UIColor *originTextColor;
@property (retain, nonatomic) NSAttributedString *originAttributedText;
@property (retain, nonatomic) UIColor *darkModeTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
