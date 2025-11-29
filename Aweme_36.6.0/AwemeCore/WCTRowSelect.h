@interface WCTRowSelect : WCTSelectBase

- (id)initWithCore:(const void *)a0 andResults:(const void *)a1 fromTables:(id)a2;
- (id)p_allRowsNew;
- (id)p_allRowsOld;
- (id)p_nextRowNew;
- (id)p_nextRowOld;
- (id)p_allValuesNew;
- (id)p_allValuesOld;
- (id)p_nextValueNew;
- (id)p_nextValueOld;
- (id)initWithCore:(const void *)a0 andResults:(const void *)a1 fromTable:(id)a2;
- (id)allRows;
- (id)allValues;
- (id)nextValue;
- (id)nextRow;

@end
