@class UIImageView, UILabel, NSString;

@interface AEEEcomSearchAddressComponentView : UIView

@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *addressChangePageSchema;
@property (copy, nonatomic) NSString *text;

- (void)clickAddressComponent;
- (void)setupViewsWithText:(id)a0;
- (void)setSchemaAndText:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
