@class NSString, NSNumber;

@interface IESLiveBaseInfoRoomInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSNumber *roomLayout;
@property (nonatomic) BOOL isPaidlive;
@property (retain, nonatomic) NSNumber *liveRoomMode;
@property (retain, nonatomic) NSNumber *gamePointsPlaying;
@property (retain, nonatomic) NSNumber *quizGamePointsPlaying;
@property (nonatomic) BOOL isLife;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
