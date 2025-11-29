@class NSString, FinderStreamResponse, FinderGetRelatedListResp, FinderGetTopicListResponse;

@interface FinderSectionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionId;
@property (retain, nonatomic) NSString *sectionDesc;
@property (nonatomic) unsigned int sectionType;
@property (nonatomic) unsigned int moreActionType;
@property (retain, nonatomic) NSString *sectionSubTitle;
@property (retain, nonatomic) NSString *iconUrlLight;
@property (retain, nonatomic) NSString *iconUrlDark;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) FinderGetTopicListResponse *topicResp;
@property (retain, nonatomic) FinderStreamResponse *streamResp;
@property (retain, nonatomic) FinderGetRelatedListResp *relatedResp;
@property (nonatomic) unsigned int recommendType;

+ (void)initialize;

@end
