@class NSString, AWEMVChannelPageContext;

@interface AWEMVDataBannerInsertPlugin : NSObject <AWEMVDataPluginProtocol>

@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFilterResponse:(id)a0 context:(id)a1;
- (BOOL)shouldInsertBannerForPullType:(unsigned long long)a0 refreshType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
