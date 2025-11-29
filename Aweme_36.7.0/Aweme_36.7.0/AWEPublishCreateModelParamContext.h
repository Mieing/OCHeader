@class NSString, AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishCreateModelParamContext : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *originImageInfos;

- (void).cxx_destruct;

@end
