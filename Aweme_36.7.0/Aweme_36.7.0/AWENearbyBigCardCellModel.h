@class NSString, NSDictionary, AWEAwemeModel, AWENearbyBigCardInteractionManager, NSNumber, AWENearbyPageContext;
@protocol AnnieXCardModelProtocol, AWEAwemePlayInteractionInteractorProtocol;

@interface AWENearbyBigCardCellModel : NSObject <AWECommonFeedCellModelProtocol, AWENearbyCardFeedCellModelProtocol>

@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (copy, nonatomic) NSString *cardSchema;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *serverCardData;
@property (copy, nonatomic) NSDictionary *lynxCacheData;
@property (retain, nonatomic) NSNumber *lynxCardHeightCache;
@property (retain, nonatomic) NSNumber *enableFastSpeed;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) AWENearbyBigCardInteractionManager *interactionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

- (id)diffIdentifierKey;
- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (id)nativeDataWithContext:(id)a0;
- (double)videoCardHeight;
- (double)videoContainerHeight;
- (double)hotCommentHeight;
- (double)riskHeight;
- (BOOL)isTextExceedingOneLine:(id)a0 fontSize:(double)a1 width:(double)a2;
- (double)getHeightStyleWithSourceWidth:(double)a0 sourceHeight:(double)a1 targetCandidateWHRatios:(id)a2;
- (double)defaultCardHeight;
- (void)updateCardLynxInitDataWithContext:(id)a0;
- (void)onAwemeToNextVideoWithContext:(id)a0;
- (void)enterDetailWithContainerId:(id)a0 sessionId:(id)a1 type:(long long)a2 logExtra:(id)a3 completion:(id /* block */)a4;
- (void)openPoiDetailWithParams:(id)a0 shrinkDelegate:(id)a1;
- (void)openTradeDetailWithParams:(id)a0 shrinkDelegate:(id)a1;
- (void)updateLynxCacheData:(id)a0;
- (void)lynxViewSizeChanged:(double)a0 context:(id)a1 animation:(BOOL)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (double)titleHeight;
- (id)cellIdentifier;

@end
