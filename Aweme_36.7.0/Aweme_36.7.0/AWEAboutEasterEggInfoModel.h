@class NSString;

@interface AWEAboutEasterEggInfoModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *scanText;
@property (nonatomic) BOOL isLabelHide;
@property (nonatomic) BOOL isScanHide;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isDiff;
@property (nonatomic) BOOL isExpire;
@property (nonatomic) BOOL isSecondary;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *tag;

- (void).cxx_destruct;

@end
