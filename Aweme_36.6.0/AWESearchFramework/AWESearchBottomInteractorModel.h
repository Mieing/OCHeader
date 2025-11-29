@class UIColor, NSString, NSDictionary, UIImage, AWEAwemeModel, NSAttributedString;

@interface AWESearchBottomInteractorModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long tipType;
@property (copy, nonatomic) NSString *iconString;
@property (retain, nonatomic) UIImage *localIconImage;
@property (copy, nonatomic) NSString *arrowIconString;
@property (retain, nonatomic) UIImage *localArrowIconImage;
@property (copy, nonatomic) NSAttributedString *headerText;
@property (copy, nonatomic) NSAttributedString *tailText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needDivider;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long roundingCorners;
@property (copy, nonatomic) NSDictionary *showTrackParams;
@property (copy, nonatomic) NSDictionary *clickTrackParams;
@property (nonatomic) BOOL hasHotTipShow;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) double iconAlpha;

- (void).cxx_destruct;
- (id)init;

@end
