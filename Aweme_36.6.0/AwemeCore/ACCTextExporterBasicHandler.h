@class AWEVideoPublishViewModel;

@interface ACCTextExporterBasicHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)initWithPublishModel:(id)a0;
- (BOOL)shouldTextExport;
- (long long)countToUpload;
- (id)textsToUpload;
- (void).cxx_destruct;

@end
