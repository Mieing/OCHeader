@class NSArray;

@interface IESLiveAudioPunishModel : NSObject

@property (retain, nonatomic) NSArray *punishUserIds;
@property (nonatomic) BOOL isPunishing;
@property (nonatomic) long long punishEndTime;
@property (nonatomic) BOOL isPauseLive;

- (void).cxx_destruct;
- (id)init;

@end
