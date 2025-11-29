@class NSString, NSNumber;

@interface AWENoxusEpisodeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *originTitle;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSNumber *playCount;
@property (copy, nonatomic) NSNumber *currentNum;
@property (copy, nonatomic) NSNumber *startTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
