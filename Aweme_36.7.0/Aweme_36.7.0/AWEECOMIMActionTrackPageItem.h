@class NSArray, NSMutableArray, UIResponder;

@interface AWEECOMIMActionTrackPageItem : NSObject

@property (retain) NSMutableArray *bcmChainForAction;
@property (copy, nonatomic) NSArray *bcmChainBeforeEnterPage;
@property (weak, nonatomic) UIResponder *host;
@property (copy, nonatomic) id /* block */ btmSignalExtraParamsBlock;

- (void)clearActionChainData;
- (void)addBcmChain:(id)a0 btmPoint:(id)a1;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;

@end
