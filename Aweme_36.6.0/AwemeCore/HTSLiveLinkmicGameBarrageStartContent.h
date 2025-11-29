@class NSString, HTSLiveLinkmicGameInfo, NSMutableArray;

@interface HTSLiveLinkmicGameBarrageStartContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkmicGameInfo *gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (copy, nonatomic) NSString *audienceToast;
@property (retain, nonatomic) NSMutableArray *kickOutUserIdsArray;
@property (readonly, nonatomic) unsigned long long kickOutUserIdsArray_Count;
@property (nonatomic) long long targetUiLayout;

+ (id)descriptor;

@end
