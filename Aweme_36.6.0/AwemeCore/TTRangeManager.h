@class NSString;

@interface TTRangeManager : NSObject

@property long long startRange;
@property long long endRange;
@property long long currOffset;
@property long long stepLen;
@property (copy) NSString *filePath;

- (id)initWithParam:(long long)a0 endRange:(long long)a1 stepLen:(long long)a2;
- (void)updateRangeResult:(id)a0 currLen:(long long)a1 error:(id)a2;
- (void)getRange:(long long *)a0 end:(long long *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isCompleted;

@end
