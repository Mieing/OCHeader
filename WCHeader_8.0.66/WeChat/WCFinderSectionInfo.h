@class NSString, FinderStreamResponse, FinderGetRelatedListResp, FinderGetTopicListResponse;

@interface WCFinderSectionInfo : NSObject

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionId;
@property (retain, nonatomic) NSString *sectionDesc;
@property (nonatomic) int sectionType;
@property (nonatomic) int iconType;
@property (retain, nonatomic) NSString *sectionSubTitle;
@property (retain, nonatomic) NSString *iconUrlLight;
@property (retain, nonatomic) NSString *iconUrlDark;
@property (nonatomic) int moreActionType;
@property (retain, nonatomic) FinderGetTopicListResponse *topicResp;
@property (retain, nonatomic) FinderStreamResponse *streamResp;
@property (retain, nonatomic) FinderGetRelatedListResp *relatedResp;
@property (nonatomic) unsigned int recommendType;
@property (nonatomic) unsigned long long refreshTime;

- (id)genPBSectionInfo;
- (void).cxx_destruct;

@end
