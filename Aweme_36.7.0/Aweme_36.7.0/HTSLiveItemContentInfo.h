@class NSString;

@interface HTSLiveItemContentInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *seriesId;
@property (nonatomic) int episodeRank;
@property (nonatomic) int videoType;

+ (id)descriptor;

@end
