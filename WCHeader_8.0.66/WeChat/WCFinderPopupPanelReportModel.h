@class NSString, NSMutableDictionary;

@interface WCFinderPopupPanelReportModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *commonReportDict;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *fromFeedId;
@property (copy, nonatomic) NSString *fromFeedSessionBuffer;
@property (copy, nonatomic) NSString *fromFinderUsername;
@property (copy, nonatomic) NSString *noticeTitle;
@property (copy, nonatomic) NSString *noticeSubtitle;
@property (copy, nonatomic) NSString *noticeTips;
@property (copy, nonatomic) NSString *noticeTipsId;
@property (copy, nonatomic) NSString *noticeTipsUuid;
@property (copy, nonatomic) NSString *noticeFeedId;

- (id)init;
- (void).cxx_destruct;

@end
