@class NSString, NSArray;

@interface AWEActivityCountdownTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long countdown;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *supportScene;
@property (nonatomic) BOOL needCheckUID;
@property (copy, nonatomic) NSString *taskUID;
@property (copy, nonatomic) NSString *taskKey;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
