@class NSString, IESLiveGuideToolBarItem, NSMutableArray;
@protocol IESLiveGuideToolBarProvider;

@interface IESLiveWishlistFragment : IESLiveGuideComponent <IESLiveGuideAnchorWishlistRouter>

@property (retain, nonatomic) NSString *desireID;
@property (retain, nonatomic) IESLiveGuideToolBarItem *wishlistToolBarItem;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (readonly, nonatomic) NSString *desireIDstrForLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)showIconWebView;
- (void)subscribePayLiveStatusMessage;
- (void).cxx_destruct;

@end
