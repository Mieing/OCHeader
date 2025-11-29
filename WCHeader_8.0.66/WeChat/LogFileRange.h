@interface LogFileRange : NSObject

@property (nonatomic) unsigned long long startPos;
@property (nonatomic) unsigned long long endPos;

- (id)initWithStartPos:(unsigned long long)a0 endPos:(unsigned long long)a1;
- (id)init;

@end
