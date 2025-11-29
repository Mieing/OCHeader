@class NSString;

@interface AWELightMissionModel : NSObject

@property (nonatomic) unsigned long long msgType;
@property (copy, nonatomic) NSString *progressUpdateType;
@property (nonatomic) unsigned long long requirementType;
@property (copy, nonatomic) NSString *missionId;
@property (copy, nonatomic) NSString *requirementId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) unsigned long long itemSource;
@property (copy, nonatomic) NSString *topicId;
@property (nonatomic) double duration;

- (id)generateRequestParamsDict;
- (void).cxx_destruct;

@end
