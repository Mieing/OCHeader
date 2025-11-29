@class AWEProfileExtensionAreaCommonParamModel, NSString, NSDictionary, NSDate;
@protocol AWEProfileExtensionAreaCardViewProtocol;

@interface AWEProfileExtensionAreaTheaterCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) NSDictionary *cardData;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *lastDate;
@property (nonatomic) BOOL shouldShowDot;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (copy, nonatomic) id /* block */ reloadCardListBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)cardDidAppear;
- (void)cardDidDisappear;
- (void)trackLVideoEntranceShow:(BOOL)a0;
- (void)updateDotShowInfoIfNeed;
- (BOOL)shouldShowDotView;
- (id)initWithModel:(id)a0 reloadCardListBlock:(id /* block */)a1;
- (void)fetchDotCardData;
- (BOOL)judgeDotViewDisplayTimeReachMax;
- (void)saveDotDisplay:(BOOL)a0 insertToDbIfNeed:(BOOL)a1;
- (BOOL)isShowedInNaturalDay;
- (void)showDotViewIfNeed;
- (void).cxx_destruct;

@end
