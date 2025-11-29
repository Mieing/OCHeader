@class NSString, AWEHotSearchPublishEntranceBaseView;
@protocol AWEHotSpotPublishHelperProtocol;

@interface AWHotSearchPublishEntranceManager : NSObject <AWEGeneralSearchPublishEntranceManagerProtocol>

@property (nonatomic) BOOL hotSearchButtonIsHide;
@property (nonatomic) long long viewStyle;
@property (nonatomic) long long configType;
@property (retain, nonatomic) AWEHotSearchPublishEntranceBaseView *entranceView;
@property (retain, nonatomic) id<AWEHotSpotPublishHelperProtocol> publishHelper;
@property (nonatomic) BOOL topicButtonIsHide;
@property (copy, nonatomic) id /* block */ shotEntryClickedBlock;
@property (copy, nonatomic) id /* block */ discussEntryClickedBlock;
@property (copy, nonatomic) id /* block */ albumEntryClickedBlock;
@property (nonatomic) long long containerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0 Container:(id)a1 configType:(long long)a2 belowView:(id)a3 logExtraDict:(id)a4;
- (void)hotSearchButtonExecuteDisappearAnim:(BOOL)a0;
- (void)removeEntranceViewFromContainer;
- (void)addEntranceViewToContainer:(id)a0 belowView:(id)a1;
- (void)updateEntranceFrameWithContainerWidth:(double)a0 Height:(double)a1;
- (BOOL)entranceViewIsShow;
- (void)updateEntranceConstraintsWithContainerView:(id)a0;
- (void)customComponentDidFinishRender;
- (void)topicButtonExecuteDisappearAnim:(BOOL)a0;
- (void)topicButtonShowFoldAnimation;
- (void)updateUIWithModelForContainer:(id)a0;
- (void)updateHotSearchButtonShowState:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
