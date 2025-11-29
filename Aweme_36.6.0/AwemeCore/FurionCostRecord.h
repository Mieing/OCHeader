@interface FurionCostRecord : NSObject

@property (nonatomic) long long begin;
@property (nonatomic) long long end;
@property (readonly, nonatomic) long long cost;

- (void)recordEnd;
- (void)recordBegin;
- (BOOL)invalid;
- (id)init;
- (void)resetData;

@end
