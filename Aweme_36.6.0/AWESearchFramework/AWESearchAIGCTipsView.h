@class NSString, UIImageView, AWESearchCachalotGeneralContext, UILabel, NSDictionary;
@protocol AWEModernFeedCellContext;

@interface AWESearchAIGCTipsView : UIViewController <AWEModernFeedCellControllerProtocol, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *keyWordLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *expandLabel;
@property (retain, nonatomic) AWESearchCachalotGeneralContext *generalContext;
@property (retain, nonatomic) NSDictionary *trackDict;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)trackSearchResultClick;
- (void)trackSearchResultShow;
- (void)replaceOneTipsButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
