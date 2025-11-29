@class NSString, AWEMemoriesPlayerTileModel;
@protocol ACCTarotFlowProtocol;

@interface AWEThemeVideoTask : NSObject

@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;
@property (retain, nonatomic) id<ACCTarotFlowProtocol> tarotFlow;
@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ removeFromQueue;

- (id)initWithTileModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)cancel;

@end
