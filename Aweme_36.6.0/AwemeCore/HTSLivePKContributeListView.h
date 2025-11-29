@class HTSLivePKContributeEntity, NSURL, UIView, NSMutableArray, NSNumber;
@protocol IESLiveInternalRouter, IESLiveRevenueInteractProvider;

@interface HTSLivePKContributeListView : UIView

@property (nonatomic) BOOL isSelf;
@property (nonatomic) BOOL win;
@property (nonatomic) BOOL isEnded;
@property (retain, nonatomic) NSMutableArray *controls;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) HTSLivePKContributeEntity *entity;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSURL *pkURL;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> interactProvider;
@property (retain, nonatomic) NSNumber *channelID;

- (void)showEmptyView;
- (void)cleanItems;
- (void)updateWithList:(id)a0;
- (void)showContributeList:(BOOL)a0;
- (void)showLynxContributeList;
- (void)hideEmpty;
- (id)initWithIdentity:(BOOL)a0 entity:(id)a1 DIContext:(id)a2;
- (void)endWithWin:(BOOL)a0;
- (void).cxx_destruct;

@end
