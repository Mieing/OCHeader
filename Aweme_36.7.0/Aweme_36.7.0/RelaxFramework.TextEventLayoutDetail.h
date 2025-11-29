@class NSMutableArray;

@interface RelaxFramework.TextEventLayoutDetail : NSObject

@property (nonatomic) int lineCount;
@property (nonatomic, retain) NSMutableArray *lines;

- (id)initWithLineCount:(int)a0 lines:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
