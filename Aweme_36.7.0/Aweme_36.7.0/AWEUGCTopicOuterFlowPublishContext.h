@class NSString, NSDictionary, NSArray, UIViewController;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWEUGCTopicOuterFlowPublishContext : NSObject

@property (retain, nonatomic) NSDictionary *logExtra;
@property (weak, nonatomic) UIViewController *outerFlowViewController;
@property (copy, nonatomic) NSString *headerCardTypeName;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> insertAfterAnchor;
@property (nonatomic) BOOL disableInsertFakeCard;
@property (nonatomic) BOOL scrollToTopAfterPublish;
@property (nonatomic) BOOL disableSuggestWord;
@property (retain, nonatomic) NSArray *headerCardTypeAliasNames;

- (void).cxx_destruct;

@end
