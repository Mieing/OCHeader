@class NSString, FinderEventWordingInfo;

@interface FinderObjectEventDesc : WXPBGeneratedMessage

@property (nonatomic) unsigned long long eventTopicId;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *eventCreatorNickname;
@property (nonatomic) unsigned int eventAttendCount;
@property (retain, nonatomic) FinderEventWordingInfo *wordingInfo;
@property (nonatomic) unsigned long long hiddenMark;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int feedCount;
@property (retain, nonatomic) NSString *eventDescribe;
@property (nonatomic) unsigned int isNeedPreload;

+ (void)initialize;

@end
