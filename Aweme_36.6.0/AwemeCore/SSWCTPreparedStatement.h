@interface SSWCTPreparedStatement : NSObject {
    void *_handleStatement;
}

- (void)bindValue:(id)a0 toIndex:(int)a1;
- (id)initWithHandleStatement:(void *)a0;
- (unsigned long long)extractTypeAtIndex:(int)a0;
- (long long)extractIntegerAtIndex:(int)a0;
- (double)extractDoubleAtIndex:(int)a0;
- (id)extractStringAtIndex:(int)a0;
- (id)extractDataAtIndex:(int)a0;
- (int)extractNumberOfColumns;
- (id)extractValueAtIndex:(int)a0;
- (void)extractValueAtIndex:(int)a0 toColumnBindingHolder:(const void *)a1 ofObject:(id)a2;
- (id)allValuesAtIndex:(int)a0;
- (id)extractRow;
- (BOOL)isStatementReadonly;
- (void)bindInteger:(const long long *)a0 toIndex:(int)a1;
- (void)bindDouble:(const double *)a0 toIndex:(int)a1;
- (void)bindString:(id)a0 toIndex:(int)a1;
- (void)bindData:(id)a0 toIndex:(int)a1;
- (void)bindNumber:(id)a0 toIndex:(int)a1;
- (int)bindParameterIndex:(const void *)a0;
- (id)extractNumberAtIndex:(int)a0;
- (id)extractOriginColumnNameAtIndex:(int)a0;
- (id)extractColumnNameAtIndex:(int)a0;
- (id)extractTableNameAtIndex:(int)a0;
- (void)extractValueAtIndex:(int)a0 toProperty:(const void *)a1 ofObject:(id)a2;
- (void)bindProperty:(const void *)a0 ofObject:(id)a1 toIndex:(int)a2;
- (void)bindNullToIndex:(int)a0;
- (id)extractMultiObjectOnResultColumns:(const void *)a0;
- (id)allMultiObjectsOnResultColumns:(const void *)a0;
- (void *)getRawHandleStatement;
- (id)allObjectsOnResultColumns:(const void *)a0;
- (id)extractObjectOnResultColumns:(const void *)a0;
- (void)bindProperties:(const void *)a0 ofObject:(id)a1;
- (id)allRows;
- (BOOL)done;
- (id)allValues;
- (void)reset;
- (BOOL)step;
- (void)clearBindings;

@end
