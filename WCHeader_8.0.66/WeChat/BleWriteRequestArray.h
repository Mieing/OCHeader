@class NSArray;

@interface BleWriteRequestArray : NSObject

@property (retain, nonatomic) NSArray *array;
@property unsigned long long processCount;

- (id)initWithArray:(id)a0;
- (id)firstObject;
- (unsigned long long)count;
- (void).cxx_destruct;

@end
