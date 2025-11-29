@class UIView, NSString, UIImage, NSURL, NSDictionary, BDPBaseContext, NSNumber, UIColor;
@protocol BDPMorePanelInterface;

@interface BDPMorePanelItem : NSObject

@property (nonatomic) long long priority;
@property (readonly, nonatomic) BOOL canHidden;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSURL *iconURL;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIView *reddot;
@property (nonatomic) BOOL isSecondRowItem;
@property (nonatomic) long long order;
@property (readonly, copy, nonatomic) NSString *englishName;
@property (readonly, nonatomic) NSURL *higherDefinitionIconUrl;
@property (copy, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) BDPBaseContext *context;
@property (nonatomic) BOOL isGameType;
@property (weak, nonatomic) id<BDPMorePanelInterface> panel;
@property (nonatomic) BOOL isAutoDismiss;
@property (nonatomic) BOOL shouldPortraitBeforeAction;
@property (nonatomic) long long morePanelOrder;
@property (nonatomic) BOOL morePanelHasWrapAction;
@property (copy, nonatomic) NSDictionary *eventExtra;
@property (nonatomic) BOOL hasTrackShow;

+ (id)itemWithName:(id)a0 icon:(id)a1 action:(id /* block */)a2;
+ (id)itemWithName:(id)a0 icon:(id)a1 higherDefinitionIconUrl:(id)a2 action:(id /* block */)a3;
+ (id)itemWithType:(long long)a0 name:(id)a1 icon:(id)a2 action:(id /* block */)a3;
+ (id)itemWithType:(long long)a0 name:(id)a1 icon:(id)a2 reddot:(id)a3 action:(id /* block */)a4;
+ (id)itemWithName:(id)a0 iconURL:(id)a1 action:(id /* block */)a2;

- (id)initWithType:(long long)a0 name:(id)a1 textColor:(id)a2 icon:(id)a3 iconURL:(id)a4 action:(id /* block */)a5;
- (id)initWithType:(long long)a0 name:(id)a1 icon:(id)a2 iconURL:(id)a3 action:(id /* block */)a4;
- (id)initWithType:(long long)a0 name:(id)a1 textColor:(id)a2 icon:(id)a3 higherDefinitionIconUrl:(id)a4 iconURL:(id)a5 reddot:(id)a6 action:(id /* block */)a7;
- (id)initWithType:(long long)a0 name:(id)a1 icon:(id)a2 higherDefinitionIconUrl:(id)a3 iconURL:(id)a4 action:(id /* block */)a5;
- (id)initWithType:(long long)a0 name:(id)a1 textColor:(id)a2 icon:(id)a3 higherDefinitionIconUrl:(id)a4 iconURL:(id)a5 action:(id /* block */)a6;
- (BOOL)itemIsInSecondRowWithName:(id)a0;
- (id)getEnglishhNameWithName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)updateAction:(id /* block */)a0;

@end
