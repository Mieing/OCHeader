@class LvLocalData;

@interface lvLocalDataItem : NSObject

@property (nonatomic) void *itemName;
@property (retain, nonatomic) LvLocalData *setMethodId;
@property (retain, nonatomic) LvLocalData *getMethodId;
@property (nonatomic) BOOL isIvar;

+ (id)genLocalDataItem:(const char *)a0 class:(Class)a1;

- (BOOL)setLocalDataItem:(id)a0;
- (BOOL)localDataItem:(id)a0 result:(void *)a1;
- (void)dealloc;

@end
