@class HTSLiveCommon, HTSLiveLinkmicSubtitleStatus, HTSLiveLinkmicStarWishWrdsMessage, NSMutableArray, HTSLiveInteractActingMessage;

@interface HTSLiveLinkmicPlaymodeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLinkmicSubtitleStatus *linkmicSubtitleStatus;
@property (nonatomic) BOOL hasLinkmicSubtitleStatus;
@property (retain, nonatomic) HTSLiveLinkmicStarWishWrdsMessage *linkmicStarwishInfo;
@property (nonatomic) BOOL hasLinkmicStarwishInfo;
@property (retain, nonatomic) NSMutableArray *linkmicChestGameStatusListArray;
@property (readonly, nonatomic) unsigned long long linkmicChestGameStatusListArray_Count;
@property (retain, nonatomic) HTSLiveInteractActingMessage *interactActingMessage;
@property (nonatomic) BOOL hasInteractActingMessage;

+ (id)descriptor;

@end
