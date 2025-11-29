@class NSString, FinderMentionFinderObject, NSData;

@interface NewLifeMentionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderMentionFinderObject *twinObject;
@property (nonatomic) unsigned int jumpDetailPageType;
@property (nonatomic) unsigned int virtualMentionType;
@property (retain, nonatomic) NSString *fromConnectTopicName;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) NSString *matchReportInfo;

+ (void)initialize;

@end
