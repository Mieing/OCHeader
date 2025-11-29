@class AWEURLModel;

@interface AWEIMResourceURLModel : NSObject

@property (readonly, nonatomic) unsigned long long resourcesType;
@property (readonly, nonatomic) unsigned long long formatType;
@property (copy, nonatomic) AWEURLModel *innerModel;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL needRecoverUrl;

- (id)initWithAWEURLModel:(id)a0;
- (id)initWithAWEURLModel:(id)a0 type:(unsigned long long)a1;
- (void)autoRefreshURLModel:(id /* block */)a0;
- (BOOL)p_couldRefreshViaURI;
- (void)refreshURLModelWithUri:(id /* block */)a0;
- (void)refreshURLModelWithUrl:(id /* block */)a0;
- (void)p_trackReloadEntrance;
- (void)p_refreshURLModelWithUrlInPosition:(long long)a0 completion:(id /* block */)a1;
- (void)p_refreshURLModelWithKey:(id)a0 isUrl:(BOOL)a1 completion:(id /* block */)a2;
- (id /* block */)p_fetchedBlockWithCompletion:(id /* block */)a0;
- (void)p_trackReloadNetworkResultStatus:(unsigned long long)a0 ext:(id)a1;
- (void).cxx_destruct;

@end
