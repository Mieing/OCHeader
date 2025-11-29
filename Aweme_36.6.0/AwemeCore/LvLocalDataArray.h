@class NSString;

@interface LvLocalDataArray : NSObject

@property (nonatomic) void *buff;
@property (retain, nonatomic) NSString *arrayPriName;
@property (nonatomic) unsigned long long priSize;
@property (nonatomic) unsigned long long arraySize;

+ (id)genLocalDataArray:(char *)a0 arraySize:(unsigned long long)a1;

- (void *)getArrayItem:(BOOL)a0;
- (BOOL)setBufferLength:(const void *)a0 pos:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)bufferfLength:(void *)a0 pos:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)commit:(void *)a0;
- (void)dealloc;

@end
