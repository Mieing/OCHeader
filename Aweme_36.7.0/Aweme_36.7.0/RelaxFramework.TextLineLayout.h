@interface RelaxFramework.TextLineLayout : NSObject

@property (nonatomic) int ellipsisCount;
@property (nonatomic) int end;
@property (nonatomic) int start;

- (id)initWithEllipsisCount:(int)a0 end:(int)a1 start:(int)a2;
- (id)init;

@end
