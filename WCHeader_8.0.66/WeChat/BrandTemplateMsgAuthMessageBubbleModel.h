@class NSString;

@interface BrandTemplateMsgAuthMessageBubbleModel : MMObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *templateIdStr;
@property (nonatomic) unsigned int templateType;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgContent;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpInfo;
@property (nonatomic) unsigned int contactType;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int containerType;
@property (nonatomic) unsigned int noticeType;
@property (nonatomic) unsigned int isRead;
@property (nonatomic) unsigned int location;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) unsigned int templateOpType;
@property (retain, nonatomic) NSString *liveId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *opTypeNote;
@property (retain, nonatomic) NSString *templateUniqueMsgId;
@property (nonatomic) unsigned int templateSubType;
@property (nonatomic) unsigned int containerEnterScene;
@property (nonatomic) unsigned int isCluster;
@property (retain, nonatomic) NSString *clusterId;
@property (nonatomic) unsigned int clusterCount;
@property (retain, nonatomic) NSString *clusterNote;

- (void).cxx_destruct;

@end
