@class WCFinderCheckThumbModel;

@interface WCFinderVideoQualityScoreModel : NSObject

@property (nonatomic) double videoScore;
@property (nonatomic) double videoCoverScore;
@property (nonatomic) double videoAudioScore;
@property (nonatomic) double thumbScore;
@property (nonatomic) double hdimgScore;
@property (nonatomic) BOOL hasStickers;
@property (retain, nonatomic) WCFinderCheckThumbModel *coverModel;

- (void).cxx_destruct;

@end
