@class NSMutableArray;

@interface IESVideoBSObjectPool : NSObject

@property (retain, nonatomic) NSMutableArray *pool;
@property (retain, nonatomic) Class objectClass;
@property (nonatomic) unsigned long long maxCount;

- (id)initWithClass:(Class)a0 maxCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)getObject;
- (void)returnObject:(id)a0;

@end
