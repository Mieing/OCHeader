@class WCFinderFeedContentVM;

@interface WCFinderJumpInfoGoodsModel : WCFinderJumpInfoBaseModel

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;

- (id)initWithContentVM:(id)a0;
- (void)jumpToMiniApp:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)realJumpToMiniApp:(id)a0 fromVC:(id)a1 params:(id)a2 productInfo:(id)a3 widgetParameters:(id)a4;
- (void).cxx_destruct;

@end
