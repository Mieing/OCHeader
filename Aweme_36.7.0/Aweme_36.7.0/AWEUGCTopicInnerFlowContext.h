@class NSString, NSDictionary, AWESearchHotSpotConfigModel, AWEButtonStyleConfigParams, AWESearchUGCPageContext, AWEAwemeModel;
@protocol AWEUGCTopicInnerFlowFunctionHandlerProtocol;

@interface AWEUGCTopicInnerFlowContext : NSObject

@property (weak, nonatomic) AWESearchUGCPageContext *pageContext;
@property (weak, nonatomic) AWESearchHotSpotConfigModel *topicPublishModel;
@property (retain, nonatomic) id<AWEUGCTopicInnerFlowFunctionHandlerProtocol> topicInnerFunctionHandler;
@property (retain, nonatomic) AWEButtonStyleConfigParams *buttonStyleConfigParams;
@property (copy, nonatomic) NSDictionary *clientServerExtra;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtra;

- (void).cxx_destruct;

@end
