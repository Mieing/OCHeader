@class NSDictionary;
@protocol IESECMallXBridgeRegisterDelegate;

@interface IESECMallBridgesRegister : NSObject

@property (weak, nonatomic) id<IESECMallXBridgeRegisterDelegate> delegate;
@property (copy, nonatomic) NSDictionary *pageXBridges;

- (id)closeHalfMall;
- (id)categoryImplementXBridges;
- (id)mallPageXBridges;
- (id)currentPageXBridgesMap;
- (id)mallAnchorPendantShowMethod;
- (id)negFeedbackClickMethod;
- (id)getFeedDataMethod;
- (id)lottieMountMethod;
- (id)anchorPendantDismiss;
- (id)anchorPendantVisibility;
- (id)scrollToFavoriteCellMethod;
- (id)popupSubmitTask;
- (id)popupDismiss;
- (id)mallGetCardPosition;
- (id)getHalfMallState;
- (id)commonImpression;
- (id)getRecommendParams;
- (id)getCachedApiResponseMethod;
- (id)updateMallFilters;
- (id)getMallVisible;
- (id)instantAndWindEnd;
- (id)openMarketingMethod;
- (id)requestShowMethod;
- (id)showToastMethod;
- (id)getRealRecommendInfoMethod;
- (id)removeCardByPosition;
- (id)ecMallCardVisible;
- (id)currentPageXBridges;
- (id)currentPageXBridgesWithInstanceBridges:(id)a0;
- (id)currentPageSubSoloChannelXBridges;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)mediaPlay;

@end
