@class BaseRequest, NSString, NSMutableArray;

@interface GetMyChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *chatroomNameList;
@property (retain, nonatomic) NSString *firstChatroomName;
@property (nonatomic) unsigned int sceneType;

+ (void)initialize;

@end
