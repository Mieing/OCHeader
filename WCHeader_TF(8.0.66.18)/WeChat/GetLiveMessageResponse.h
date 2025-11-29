@class LiveExtInfo, NSData, NSMutableArray, BaseResponse;

@interface GetLiveMessageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int onlineCnt;
@property (retain, nonatomic) NSMutableArray *onlineHeadimgList;
@property (nonatomic) unsigned int likeCnt;
@property (nonatomic) BOOL needUpdate;
@property (retain, nonatomic) LiveExtInfo *extInfo;

+ (void)initialize;

@end
