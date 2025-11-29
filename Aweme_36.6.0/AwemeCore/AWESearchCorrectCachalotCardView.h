@class AWESearchTracker, AWESearchCorrectModel, NSString, UIView, AWESearchCorrectCachalotContentView, AWESearchCachalotResultContext;

@interface AWESearchCorrectCachalotCardView : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchCorrectCachalotContentView *contentView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchCachalotResultContext *context;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)configUI;
- (void)trackShow;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)trackClick;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
