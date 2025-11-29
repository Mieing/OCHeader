@class NSString;

@interface AWEDiscoverDPlayletPaymentUtils : NSObject <AWEDiscoverDPlayletPaymentUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowMixPaymentFeedCard:(id)a0;
+ (BOOL)shouldShowPlayletPaymentFeedCard:(id)a0;
+ (void)updateOriginDataSource:(id)a0 withModels:(id)a1 completeBlock:(id /* block */)a2;
+ (id)needSyncFilteredDataSourcePage;


@end
