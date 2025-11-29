@class HTSLiveGiftSortStrategy, HTSLiveCommon;

@interface HTSLiveGiftSortMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (nonatomic) long long minConsumeLevel;
@property (retain, nonatomic) HTSLiveGiftSortStrategy *sceneInsertStrategy;
@property (nonatomic) BOOL hasSceneInsertStrategy;

+ (id)descriptor;

@end
