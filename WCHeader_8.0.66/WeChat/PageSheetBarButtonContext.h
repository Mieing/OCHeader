@class UIColor, UIFont, NSString, NSObject;

@interface PageSheetBarButtonContext : NSObject

@property (retain, nonatomic) NSObject *oTarget;
@property (nonatomic) SEL oSelector;
@property (nonatomic) unsigned long long eStyle;
@property (nonatomic) double fMaxWidth;
@property (retain, nonatomic) UIColor *oColor;
@property (retain, nonatomic) UIFont *oFont;
@property (retain, nonatomic) NSString *oTitle;
@property (retain, nonatomic) NSString *nsImgName;
@property (retain, nonatomic) NSString *oAccessibilityStr;
@property (readonly, copy, nonatomic) id /* block */ title;
@property (readonly, copy, nonatomic) id /* block */ style;
@property (readonly, copy, nonatomic) id /* block */ maxWidth;
@property (readonly, copy, nonatomic) id /* block */ color;
@property (readonly, copy, nonatomic) id /* block */ font;
@property (readonly, copy, nonatomic) id /* block */ imgName;
@property (readonly, copy, nonatomic) id /* block */ accessibilityStr;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)genButtonItem;
- (void).cxx_destruct;

@end
