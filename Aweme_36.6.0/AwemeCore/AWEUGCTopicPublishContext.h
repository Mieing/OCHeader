@class AWEHotSpotPublishConfigParams, AWEUGCTopicOuterFlowPublishContext, AWEUGCTopicPublishCreationTask, AWEUGCInnerFlowPublishContext;

@interface AWEUGCTopicPublishContext : NSObject

@property (nonatomic) unsigned long long flowType;
@property (nonatomic) unsigned long long publishType;
@property (retain, nonatomic) AWEHotSpotPublishConfigParams *configParams;
@property (retain, nonatomic) AWEUGCInnerFlowPublishContext *innerFlowPublishContext;
@property (retain, nonatomic) AWEUGCTopicOuterFlowPublishContext *outerFlowPublishContext;
@property (retain, nonatomic) AWEUGCTopicPublishCreationTask *publishTask;

- (void).cxx_destruct;

@end
