@class ACCPicTemplateModel, NSArray, NPApplyTarget_OC, AWEVideoPublishViewModel, ACCPicTemplateApplyResult;
@protocol ACCEditServiceProtocol;

@interface ACCPicTemplateApplyContext : NSObject

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *project;
@property (retain, nonatomic) ACCPicTemplateModel *templateModel;
@property (nonatomic) BOOL needPreprocess;
@property (nonatomic) BOOL hasAIGCRequest;
@property (nonatomic) BOOL willApplyAIGC;
@property (retain, nonatomic) NPApplyTarget_OC *applyTarget;
@property (retain, nonatomic) ACCPicTemplateApplyResult *applyResult;
@property (retain, nonatomic) NSArray *slotImageInfo;
@property (retain, nonatomic) NSArray *slotInfoList;

- (id)initWithProject:(id)a0 templateModel:(id)a1;
- (void).cxx_destruct;

@end
