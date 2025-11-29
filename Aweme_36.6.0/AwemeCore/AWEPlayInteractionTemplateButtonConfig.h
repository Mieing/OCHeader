@class NSString, UIColor, AWEURLModel;

@interface AWEPlayInteractionTemplateButtonConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *duxIconID;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (nonatomic) unsigned long long iconPosition;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *flashBackgroundColor;
@property (copy, nonatomic) id /* block */ btnClickBlock;

- (id)initWithButtonUnit:(id)a0;
- (void).cxx_destruct;

@end
