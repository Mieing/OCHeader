@class NSNumber, NSString;

@interface AWELiveFormatExtra : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *vsSeasonId;
@property (retain, nonatomic) NSNumber *vsEpisodeId;
@property (retain, nonatomic) NSString *vsEpisodeStage;
@property (retain, nonatomic) NSString *vsAvatarStyle;
@property (retain, nonatomic) NSNumber *vsIsProtraitContent;
@property (retain, nonatomic) NSNumber *vsIsNew;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
