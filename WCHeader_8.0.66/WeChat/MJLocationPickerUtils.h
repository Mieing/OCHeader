@interface MJLocationPickerUtils : NSObject

+ (id)handler;
+ (void)setHandler:(id)a0;
+ (void)presentLocationPickerFrom:(id)a0 didFinishPick:(id /* block */)a1 didCancel:(id /* block */)a2;
+ (void)clear;

@end
