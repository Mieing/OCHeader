@class LynxUIContext, LynxUIListCellContentProducer;

@interface LynxUIListDataSource : NSObject

@property (retain, nonatomic) LynxUIListCellContentProducer *internalDataSourceLight;
@property (weak, nonatomic) LynxUIContext *UIContext;

- (void)setLynxSign:(long long)a0;
- (id)listView:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)listView:(id)a0 recycleCell:(id)a1;
- (id)listView:(id)a0 updateCell:(id)a1 toItemAtIndex:(long long)a2;
- (void)setLynxUIContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
