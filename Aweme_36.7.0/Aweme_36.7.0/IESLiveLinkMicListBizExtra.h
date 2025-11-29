@class IESLiveLinkMicOpenGameInfo;

@interface IESLiveLinkMicListBizExtra : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicOpenGameInfo *openGame;
@property (nonatomic) BOOL hasOpenGame;

+ (id)descriptor;

@end
