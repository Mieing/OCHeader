@class BaseResponse, NSString, NSData, LiveRoomImg, NSMutableArray, FinderLiveMicInfo;

@interface FinderGetLiveMsgWithOffsetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) FinderLiveMicInfo *liveMicInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int intervalInSecond;
@property (nonatomic) unsigned int isInvalid;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) LiveRoomImg *liveRoomImg;

+ (void)initialize;

@end
