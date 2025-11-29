@interface WCTPreparedStatement : NSObject {
    void *_handleStatement;
}

- (id)initWithHandleStatement:(void *)a0;
- (void *)getRawHandleStatement;
- (BOOL)step;
- (void)reset;
- (void)clearBindings;
- (BOOL)done;
- (BOOL)isStatementReadonly;
- (void)bindInteger:(const long long *)a0 toIndex:(int)a1;
- (void)bindDouble:(const double *)a0 toIndex:(int)a1;
- (void)bindNullToIndex:(int)a0;
- (void)bindString:(id)a0 toIndex:(int)a1;
- (void)bindData:(id)a0 toIndex:(int)a1;
- (void)bindNumber:(id)a0 toIndex:(int)a1;
- (void)bindValue:(id)a0 toIndex:(int)a1;
- (void)bindProperty:(const void *)a0 ofObject:(id)a1 toIndex:(int)a2;
- (void)bindProperties:(const void *)a0 ofObject:(id)a1;
- (int)bindParameterIndex:(const void *)a0;
- (long long)extractIntegerAtIndex:(int)a0;
- (double)extractDoubleAtIndex:(int)a0;
- (id)extractStringAtIndex:(int)a0;
- (id)extractNumberAtIndex:(int)a0;
- (id)extractDataAtIndex:(int)a0;
- (id)extractValueAtIndex:(int)a0;
- (unsigned long long)extractTypeAtIndex:(int)a0;
- (int)extractNumberOfColumns;
- (id)extractOriginColumnNameAtIndex:(int)a0;
- (id)extractColumnNameAtIndex:(int)a0;
- (id)extractTableNameAtIndex:(int)a0;
- (id)extractRow;
- (id)extractObjectOnResultColumns:(const void *)a0;
- (id)extractMultiObjectOnResultColumns:(const void *)a0;
- (void)extractValueAtIndex:(int)a0 toProperty:(const void *)a1 ofObject:(id)a2;
- (void)extractValueAtIndex:(int)a0 toColumnBindingHolder:(const void *)a1 ofObject:(id)a2;
- (id)allValues;
- (id)allValuesAtIndex:(int)a0;
- (id)allRows;
- (id)allObjectsOnResultColumns:(const void *)a0;
- (id)allMultiObjectsOnResultColumns:(const void *)a0;

@end
