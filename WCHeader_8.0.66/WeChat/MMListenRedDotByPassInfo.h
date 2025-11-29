@class MMListenRedDotByPassInfo_MusicRedotScore, MMListenSlideOver, NSData, NSMutableArray, MMListenRedDotByPassInfo_JumpInfo;

@interface MMListenRedDotByPassInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) MMListenRedDotByPassInfo_JumpInfo *jumpInfo;
@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (retain, nonatomic) MMListenRedDotByPassInfo_MusicRedotScore *musicRedDotScore;
@property (retain, nonatomic) MMListenSlideOver *slideOver;
@property (retain, nonatomic) NSData *userFeature;

+ (void)initialize;

@end
