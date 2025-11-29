@class NSString, WCFinderPostSourceInfo, WCFinderFeedVideoFetcher;

@interface WCFinderTemplatePublishParams : NSObject

@property (nonatomic) unsigned long long eventId;
@property (copy, nonatomic) NSString *followFeedId;
@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSString *followFeedTemplateId;
@property (nonatomic) BOOL showPostVideoToCommentAreaSwitch;
@property (retain, nonatomic) WCFinderPostSourceInfo *sourceInfo;
@property (copy, nonatomic) NSString *topicContent;
@property (retain, nonatomic) WCFinderFeedVideoFetcher *videoFetcher;
@property (nonatomic) BOOL disableShowNoTmpl;
@property (nonatomic) BOOL disableShowMoreTmpl;
@property (nonatomic) BOOL disableShowFromAlbum;

- (id)init;
- (void).cxx_destruct;

@end
