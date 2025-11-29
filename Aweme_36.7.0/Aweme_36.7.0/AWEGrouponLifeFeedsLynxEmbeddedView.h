@class AWEGrouponLifeFeedsLynxEmbeddedCardModel;

@interface AWEGrouponLifeFeedsLynxEmbeddedView : LynxView

@property (retain, nonatomic) AWEGrouponLifeFeedsLynxEmbeddedCardModel *cardModel;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)loadTemplateWithLynxLoadMeta:(id)a0;
- (void)updateDataWithMetaData:(id)a0;
- (void).cxx_destruct;

@end
