@class NSString;

@interface OpenIMChatRoomData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *bigHeadimg;
@property (retain, nonatomic) NSString *smallHeadimg;
@property (nonatomic) unsigned int imgFlag;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *topicPyinit;
@property (retain, nonatomic) NSString *topicQuanpin;
@property (retain, nonatomic) NSString *announcement;
@property (retain, nonatomic) NSString *announcementEditor;
@property (nonatomic) unsigned int announcementPublishTime;
@property (nonatomic) unsigned int chatRoomMaxCount;
@property (nonatomic) unsigned long long extFlag;
@property (nonatomic) unsigned long long chatRoomBusinessType;

+ (void)initialize;

@end
