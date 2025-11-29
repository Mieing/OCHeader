@class UIButton, NSString, UIView;

@interface ACCBarItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *titleView;
@property (nonatomic) BOOL useAnimatedButton;
@property (nonatomic) BOOL placeLastUnfold;
@property (nonatomic) BOOL needDisableButNotHideButton;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectedImageName;
@property (nonatomic) void *itemId;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) id /* block */ barItemActionBlock;
@property (copy, nonatomic) id /* block */ barItemViewConfigBlock;
@property (copy, nonatomic) id /* block */ needShowBlock;
@property (retain, nonatomic) id extraData;
@property (nonatomic) BOOL labelShowing;
@property (nonatomic) BOOL enableSectionPermanent;
@property (nonatomic) BOOL isDivisionItem;
@property (copy, nonatomic) id /* block */ showBubbleBlock;
@property (copy, nonatomic) id /* block */ willShowBlock;
@property (retain, nonatomic) UIView *guideView;
@property (copy, nonatomic) NSString *trackIdentifier;
@property (copy, nonatomic) NSString *trackFunctionName;

- (id)initWithButton:(id)a0 titleView:(id)a1 itemId:(void *)a2;
- (id)initWithButton:(id)a0 title:(id)a1 itemId:(void *)a2;
- (id)initWithImageName:(id)a0 itemId:(void *)a1;
- (id)initWithImageName:(id)a0 title:(id)a1 itemId:(void *)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
