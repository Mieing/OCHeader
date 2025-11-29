@class NSString, NSMutableArray;

@interface WCJSFrame : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) int line;
@property (nonatomic) int column;
@property (nonatomic) int repeatCount;
@property (retain, nonatomic) NSMutableArray *subFrames;

- (id)initWithRepeatCount:(int)a0 name:(id)a1 path:(id)a2 line:(int)a3 column:(int)a4;
- (void)addSubFrame:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)makeInfoDict;
- (void).cxx_destruct;

@end
