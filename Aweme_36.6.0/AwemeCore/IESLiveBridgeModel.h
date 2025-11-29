@class NSDictionary, UIView, PuzzleJSBContext;
@protocol IESLiveHybridContainerProtocol;

@interface IESLiveBridgeModel : AnnieDynamicModel

@property (readonly, nonatomic) PuzzleJSBContext *iesec_PuzzleJSBContext;
@property (retain, nonatomic) NSDictionary *extraDictionary;
@property (retain, nonatomic) PuzzleJSBContext *jsbContext;
@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *container;

- (id)gcpDIContext;
- (id)extractPid;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)getData;

@end
