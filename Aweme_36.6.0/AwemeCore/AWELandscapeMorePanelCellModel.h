@class UIColor, NSString, UIFont, UIImage, AWEAwemeModel;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWELandscapeMorePanelCellModel : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subText;
@property (nonatomic) BOOL closePanelAfterTap;
@property (nonatomic) unsigned long long positionType;
@property (nonatomic) unsigned long long layoutStyle;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) BOOL switchIsOn;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ willDisplayBlock;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)textColorWithSelected:(BOOL)a0;
+ (id)fontWithSelected:(BOOL)a0;
+ (id)adapterIconImageIfNeeded:(id)a0;
+ (struct CGSize { double x0; double x1; })iconSize;

- (id)aAWEBrandColorAdapter;
- (void).cxx_destruct;
- (id)init;

@end
