@class NSString, NSMutableArray;

@interface FurionFactorGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutFactorQuerys;
@property (retain, nonatomic) NSString *dataSourceName;
@property (retain, nonatomic) NSString *groupName;

- (void)addQuerysWithNames:(id)a0 queryTemplate:(id /* block */)a1;
- (void)addQuerysWithNames:(id)a0;
- (id)factorQuerys;
- (void)addQueryObjects:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0;
- (void)addQuery:(id /* block */)a0;

@end
