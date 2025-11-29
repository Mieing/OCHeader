@class NSString;

@interface AWEPublishVideoHandleAwemeStage : AWEPublishHandleAwemeStage

@property (retain, nonatomic) NSString *uploadVideoUrl;

- (void)saveResourcesToLocal;
- (id)initWithModel:(id)a0 uploadVideoUrl:(id)a1 createAwemeResponse:(id)a2;
- (void).cxx_destruct;

@end
