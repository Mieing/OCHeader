@class NSString;
@protocol WAPrivacyUsageDetailCgiDelegate;

@interface WAPrivacyUsageDetailCgi : WCBaseCgi

@property (weak, nonatomic) id<WAPrivacyUsageDetailCgiDelegate> delegate;
@property (copy, nonatomic) NSString *usrname;
@property (nonatomic) unsigned int lastUpdateTime;
@property (nonatomic) unsigned int recordCount;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)mockDataWithDate:(id)a0;
- (void).cxx_destruct;

@end
