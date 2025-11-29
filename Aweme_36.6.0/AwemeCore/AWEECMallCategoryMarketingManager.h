@class NSString, NSMutableDictionary, IESECLynxCardBridgeEventSubscriber, AWEECMallCategoryView;

@interface AWEECMallCategoryMarketingManager : NSObject <AWEECMultiMallMarketControlService>

@property (copy, nonatomic) NSString *ENVID;
@property (retain, nonatomic) IESECLynxCardBridgeEventSubscriber *bubbleResSubscriber;
@property (retain, nonatomic) NSMutableDictionary *operationMap;
@property (retain, nonatomic) AWEECMallCategoryView *categoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestShowTabLottieID:(id)a0 completed:(id /* block */)a1;
- (void)requestHideTabLottieID:(id)a0 completed:(id /* block */)a1;
- (void)resetENVID:(id)a0;
- (void)handleTabReddotVisible:(BOOL)a0 tabInfo:(id)a1 result:(id /* block */)a2 dismiss:(id /* block */)a3;
- (void)handleTabBubbleVisible:(BOOL)a0 tabInfo:(id)a1 result:(id /* block */)a2 dismiss:(id /* block */)a3;
- (void)dismissAnchorImageForTabInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
