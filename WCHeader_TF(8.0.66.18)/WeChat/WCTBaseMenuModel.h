@class UIImage;

@interface WCTBaseMenuModel : WCTBaseSettingModel

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL showArrow;

+ (id)createWithIcon:(id)a0 title:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
