@class ACCPicTemplateModel, NSArray, AWEVideoPublishViewModel, NSError;

@interface ACCPicTemplateApplyResult : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *project;
@property (retain, nonatomic) ACCPicTemplateModel *templateModel;
@property (retain, nonatomic) NSArray *trackChangeInfo;
@property (retain, nonatomic) NSError *applyError;

- (id)initWithTargetTemplateModel:(id)a0;
- (void).cxx_destruct;

@end
