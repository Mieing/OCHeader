@class NSString, NSMutableDictionary, AWEPageContext, AWEAwemeModel, NSDictionary;
@protocol AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate;

@interface AWEFeedAnchorBaseConfig : NSObject <AWEFeedAnchorBaseConfigProtocol>

@property (retain, nonatomic) NSMutableDictionary *extra;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ anchorViewDidDisappearBlock;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (BOOL)useNewStyle;
- (id)anchorViewType;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (BOOL)configAnchorExtraInfoWithKey:(id)a0 value:(id)a1;
- (void)removeAnchorExtraInfoWithKey:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
