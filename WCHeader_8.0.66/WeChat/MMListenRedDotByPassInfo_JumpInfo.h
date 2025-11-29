@class MMListenRecommendInfo, MMListenCategoryItem, MMListenAudioDiscoverInsertion, NSData, MMListenMusicDiscoverInsertion, MMListenCircleXRedDotSession;

@interface MMListenRedDotByPassInfo_JumpInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (nonatomic) int intType;
@property (retain, nonatomic) NSData *audioSyncSessionBuffer;
@property (retain, nonatomic) MMListenMusicDiscoverInsertion *musicInsertion;
@property (retain, nonatomic) MMListenAudioDiscoverInsertion *audioInsertion;
@property (retain, nonatomic) MMListenCircleXRedDotSession *circlexRedDotSession;

+ (void)initialize;

@end
