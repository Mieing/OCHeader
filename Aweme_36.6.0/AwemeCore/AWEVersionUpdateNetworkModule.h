@class NSString, MMKV, AWEVersionUpdateReleaseModel;
@protocol AWEHPNetCombineSubscriberAbility;

@interface AWEVersionUpdateNetworkModule : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWEVersionUpdateReleaseModel *releaseInfo;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberAbility> combineAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAbility:(id)a0;
- (long long)checkNewVersionResult;
- (void)fetchLatestVersionInfoWithBody:(id)a0 completion:(id /* block */)a1;
- (void)checkNewVersionWithBody:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0;
- (void)handleResponse:(id)a0 completion:(id /* block */)a1;

@end
