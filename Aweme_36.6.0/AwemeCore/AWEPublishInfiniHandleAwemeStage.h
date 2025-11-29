@class NSDictionary, NSArray;

@interface AWEPublishInfiniHandleAwemeStage : AWEPublishHandleAwemeStage

@property (retain, nonatomic) NSDictionary *imageInfos;
@property (retain, nonatomic) NSArray *uploadVideoUrls;
@property (retain, nonatomic) NSDictionary *imageResouceDic;

- (void)saveResourcesToLocal;
- (id)imageResoucesWithFlowModel:(id)a0;
- (id)videoResourcesWithFlowModel:(id)a0;
- (id)resourcesWithFlowModel:(id)a0;
- (void)imageOriginResourcesWithFlowModel:(id)a0;
- (void)videoOriginResourcesWithFlowModel:(id)a0;
- (void).cxx_destruct;

@end
