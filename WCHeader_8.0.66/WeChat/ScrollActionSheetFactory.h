@interface ScrollActionSheetFactory : NSObject

+ (id)actionSheetWithConfig:(id)a0;
+ (id)itemForType:(unsigned long long)a0;
+ (id)itemForInfo:(id)a0;
+ (id)infoWithItemType:(long long)a0;
+ (void)registerInfo:(int)a0 title:(id)a1 iconImg:(id)a2 positon:(int)a3;

@end
