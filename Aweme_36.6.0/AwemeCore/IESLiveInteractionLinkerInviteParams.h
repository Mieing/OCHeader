@class NSString;

@interface IESLiveInteractionLinkerInviteParams : IESLiveInteractionLinkerParams

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUID;
@property (nonatomic) long long seatIndex;

- (void).cxx_destruct;

@end
