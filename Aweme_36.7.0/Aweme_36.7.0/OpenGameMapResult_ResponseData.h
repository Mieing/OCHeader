@class OpenGameMapResult_PoisonCircle, NSString, HTSLiveImage, NSMutableArray;

@interface OpenGameMapResult_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *anchorInfoArray;
@property (readonly, nonatomic) unsigned long long anchorInfoArray_Count;
@property (retain, nonatomic) HTSLiveImage *mapImage;
@property (nonatomic) BOOL hasMapImage;
@property (retain, nonatomic) OpenGameMapResult_PoisonCircle *poisonCircle;
@property (nonatomic) BOOL hasPoisonCircle;
@property (nonatomic) long long gameStatusId;
@property (nonatomic) long long gameBattleId;
@property (copy, nonatomic) NSString *openGameAppId;
@property (nonatomic) long long controlUserId;
@property (copy, nonatomic) NSString *controlOpenId;

+ (id)descriptor;

@end
