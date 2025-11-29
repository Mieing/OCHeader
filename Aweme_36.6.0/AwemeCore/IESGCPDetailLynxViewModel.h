@class NSString, NSMutableDictionary;
@protocol IESGCPLynxCardViewProtocol;

@interface IESGCPDetailLynxViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) id<IESGCPLynxCardViewProtocol> lynxCardView;
@property (retain, nonatomic) NSMutableDictionary *originInitialData;
@property (nonatomic) BOOL isFromPreload;
@property (nonatomic) BOOL preloadHybridViewDidUpdateData;
@property (nonatomic) BOOL didUpdateRealData;
@property (retain, nonatomic) NSString *lynxURL;
@property (nonatomic) struct CGSize { double width; double height; } lynxPreferredFrame;

- (void)updateLynxData:(BOOL)a0;
- (id)hybridView;
- (BOOL)enableAnnieXCard;
- (BOOL)isDetailLynxCard;
- (void)updatePreloadHybridViewDataIfNeeded;
- (id)getHybridViewWithLifeDelegate:(id)a0;
- (void)addInitialParams:(id)a0;
- (id)lynxInitialData:(BOOL)a0;
- (id)lynxUrlAppendQueryItems;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)init;
- (double)defaultHeight;

@end
