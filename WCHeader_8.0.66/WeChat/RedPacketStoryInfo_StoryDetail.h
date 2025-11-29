@class NSString, RedPacketStoryInfo_FinderInfo;

@interface RedPacketStoryInfo_StoryDetail : WXPBGeneratedMessage

@property (nonatomic) int mediaType;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *mediaMd5;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;
@property (retain, nonatomic) NSString *mediaFuzzyThumbnailUrl;
@property (retain, nonatomic) NSString *mediaFuzzyThumbnailMd5;
@property (retain, nonatomic) NSString *mediaThumbnailUrl;
@property (retain, nonatomic) NSString *mediaThumbnailMd5;
@property (retain, nonatomic) RedPacketStoryInfo_FinderInfo *finderInfo;

+ (void)initialize;

@end
