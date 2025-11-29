@class AWETeenModeAlertWindowVisualStyleModel, NSString, NSArray, AWETeenModeAlertContentModel, AWETeenModeAlertOptContentModel, AWETeenModeAlertImageModel, AWETeenModeAlertAutoCloseModel, AWEAntiAddictPopupModel, UIColor;

@interface AWETeenModeAlertConfigModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenModeAlertImageModel *image;
@property (nonatomic) long long windowType;
@property (retain, nonatomic) AWETeenModeAlertContentModel *content;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSString *titleImage;
@property (nonatomic) long long contentPosition;
@property (retain, nonatomic) UIColor *contentListColor;
@property (retain, nonatomic) AWETeenModeAlertWindowVisualStyleModel *windowVisualStyle;
@property (retain, nonatomic) NSString *enterText;
@property (retain, nonatomic) NSString *exitText;
@property (nonatomic) long long target;
@property (retain, nonatomic) NSString *UIID;
@property (nonatomic) long long buttonType;
@property (retain, nonatomic) AWETeenModeAlertOptContentModel *optContent;
@property (retain, nonatomic) AWETeenModeAlertAutoCloseModel *autoCloseConfig;
@property (retain, nonatomic) AWEAntiAddictPopupModel *popupModel;
@property (copy, nonatomic) NSString *promotionText;

+ (id)imageJSONTransformer;
+ (id)contentJSONTransformer;
+ (id)contentsJSONTransformer;
+ (id)contentPositionJSONTransformer;
+ (id)windowVisualStyleJSONTransformer;
+ (id)contentListColorJSONTransformer;
+ (id)targetJSONTransformer;
+ (id)buttonTypeJSONTransformer;
+ (id)optContentJSONTransformer;
+ (id)autoCloseConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)simpleAlertDefaultContents;
- (void).cxx_destruct;

@end
