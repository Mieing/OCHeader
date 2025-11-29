@interface IESPlayTimePredictInputFeature : NSObject

@property (nonatomic) int playTime;
@property (nonatomic) BOOL didFinishPlayingVideo;
@property (nonatomic) int didClickUserAvatarCount;
@property (nonatomic) int didClickCommentCount;
@property (nonatomic) int didLikeCount;

@end
