@interface IESLiveInteractMultiAudioTrackModel : NSObject

@property (copy, nonatomic) id /* block */ paidLinkmicTrackModel;
@property (copy, nonatomic) id /* block */ guestConnectionOverTrackModel;
@property (copy, nonatomic) id /* block */ guestConnectionSuccessTrackModel;
@property (copy, nonatomic) id /* block */ voiceRoomWatchDuraionTrackModel;
@property (copy, nonatomic) id /* block */ voiceRoomShowTrackModel;
@property (copy, nonatomic) id /* block */ applyConnectionTrackModel;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionSuccessTrackModel;
@property (copy, nonatomic) id /* block */ anchorAudienceConnectionOverTrackModel;

- (void).cxx_destruct;

@end
