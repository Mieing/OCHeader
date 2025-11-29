@class NSString, NSNumber, IESLiveLGameAudienceInstantPlayModel;

@interface IESLiveLGameAudienceModel : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *gameSchema;
@property (copy, nonatomic) NSString *clickIDNature;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long gameType;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long liveScene;
@property (retain, nonatomic) IESLiveLGameAudienceInstantPlayModel *instantPlayModel;

- (void).cxx_destruct;

@end
