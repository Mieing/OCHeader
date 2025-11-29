@class NSString;
@protocol WAOverallAuthListCgiDelegate;

@interface WAOverallAuthListCgi : WCBaseCgi

@property (weak, nonatomic) id<WAOverallAuthListCgiDelegate> delegate;
@property (copy, nonatomic) NSString *usrname;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int recordCount;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)mockData:(id)a0;
- (void).cxx_destruct;

@end
