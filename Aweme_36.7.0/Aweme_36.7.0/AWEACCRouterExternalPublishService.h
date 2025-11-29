@class NSString;

@interface AWEACCRouterExternalPublishService : NSObject <AWEACCExternalPublishService>

@property (retain, nonatomic) id transcoderTask;
@property (nonatomic) BOOL exporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startVideoPublishViewControllerWithVideoUrl:(id)a0 challenges:(id)a1 extraInfo:(id)a2;
- (id)startVideoPublishViewControllerWithAssetModel:(id)a0 withExtraInfo:(id)a1 processDataBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
