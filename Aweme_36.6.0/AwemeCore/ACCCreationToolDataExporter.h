@class AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCCreationToolDataExporter : NSObject

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;

- (id)initWithRepoContainer:(id)a0;
- (void)cancelWithToken:(id)a0;
- (void).cxx_destruct;

@end
