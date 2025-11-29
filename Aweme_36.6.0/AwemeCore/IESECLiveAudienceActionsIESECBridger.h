@class NSString;
@protocol IESLiveAudienceECommerceActions;

@interface IESECLiveAudienceActionsIESECBridger : NSObject <IESECLiveAudienceActions>

@property (retain, nonatomic) id<IESLiveAudienceECommerceActions> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)willShowShoppingToolBarItem;
- (void)didShowShoppingToolBarItemInMoreTools;
- (void)didShowShoppingToolBarItem;
- (void)didHideShoppingToolBarItem;
- (void)commerceStateWhenEnter:(BOOL)a0;
- (void)didShowCommerceCardView;
- (void).cxx_destruct;

@end
