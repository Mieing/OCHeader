@interface AWEIMDoubleCheckActionSheetView : AWEUserActionSheetView

+ (id)instanceWithTitle:(id)a0 confirmTitle:(id)a1 confirmHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3;
+ (id)instanceWithTitle:(id)a0 confirmTitle:(id)a1 confirmHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3 confirmSheetActionStyle:(unsigned long long)a4;
+ (id)instanceWithTitle:(id)a0 deleteHandler:(id /* block */)a1 cancelHandler:(id /* block */)a2;

- (void)dismissDoubleCheckView;
- (id)init;
- (void)dealloc;

@end
