@class NSString, WCFinderFeedContentVM;

@interface WCFinderJumpNativeMJTemplateParams : NSObject

@property (retain, nonatomic) NSString *tmpl_topic_id;
@property (copy, nonatomic) NSString *sourceFeedId;
@property (retain, nonatomic) WCFinderFeedContentVM *sourceFeedContentVM;

- (void).cxx_destruct;

@end
