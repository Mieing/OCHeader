@class NSString, UIView;

@interface ACCTextTemplateSwitchOption : NSObject

@property (nonatomic) unsigned long long toolType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) UIView *toolContentView;

- (id)initWithOptionType:(unsigned long long)a0 title:(id)a1 iconName:(id)a2;
- (void).cxx_destruct;

@end
