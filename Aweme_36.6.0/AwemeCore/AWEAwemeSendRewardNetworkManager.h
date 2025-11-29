@class NSString;

@interface AWEAwemeSendRewardNetworkManager : NSObject <AWESendRewardNetworkManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)strategySendRewardWithModel:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
+ (id)commonParams:(id)a0;
+ (id)arrayToJsonString:(id)a0;
+ (id)modelToJsonDictionary:(id)a0;
+ (id)configHostURL:(id)a0;
+ (id)sendRewardConfigWithModel:(id)a0;


@end
