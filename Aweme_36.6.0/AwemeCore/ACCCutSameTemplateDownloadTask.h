@class NSMutableArray;
@protocol ACCMVTemplateModelProtocol;

@interface ACCCutSameTemplateDownloadTask : ACCFileDownloadTask

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) NSMutableArray *completionBlocks;

- (void).cxx_destruct;

@end
