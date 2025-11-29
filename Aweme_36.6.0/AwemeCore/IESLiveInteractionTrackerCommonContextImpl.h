@class NSString, NSArray;

@interface IESLiveInteractionTrackerCommonContextImpl : IESLiveInteractionTrackerParamsModel <IESLiveInteractionTrackerCommonContext>

@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *functionType2;
@property (copy, nonatomic) NSString *layoutType;
@property (copy, nonatomic) NSArray *playModes;
@property (copy, nonatomic) NSString *seatFitStatus;
@property (nonatomic) BOOL isFromAudienceLinkmic;
@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *fromUserType;
@property (nonatomic) long long enlargeOpenFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (void)clean;

@end
