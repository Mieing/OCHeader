@class NSMutableArray;

@interface VCABRResult : NSObject

@property (retain, nonatomic) NSMutableArray *elements;

- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)elementAtIndex:(int)a0;
- (int)getSize;

@end
