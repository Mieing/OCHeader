@class NSString, AWESearchVideoExperienceTrackStateMachine;

@interface AWESearchVideoExperienceAlbumTrackModel : NSObject

@property (retain, nonatomic) NSString *awemeItemId;
@property (retain, nonatomic) NSString *uri;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) AWESearchVideoExperienceTrackStateMachine *albumMachine;

- (void).cxx_destruct;

@end
