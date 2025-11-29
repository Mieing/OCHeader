@class NSString;

@interface IESLiveRoomQuizInfoModel : IESLiveDynamicModel

@property (nonatomic) long long quizId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int status;

- (id)initWithDictionary:(id)a0;

@end
