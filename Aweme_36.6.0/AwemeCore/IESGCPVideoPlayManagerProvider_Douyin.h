@class NSString;

@interface IESGCPVideoPlayManagerProvider_Douyin : NSObject <AWEGCPVideoPlayManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAwemeItemsWithIDs:(id)a0 completion:(id /* block */)a1;
+ (id)transformGameAwemeModelIESGCPGameFeedItems:(id)a0;
+ (id)transformAwemeModelFromLiveRoom:(id)a0;
+ (id)transformAwemeModelFromJsonString:(id)a0;
+ (id)transformGameAwemeModelFromAwemeModel:(id)a0 contentType:(int)a1 mixId:(id)a2;


@end
