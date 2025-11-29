@class HTSLiveUser, NSString, NSArray, IESLiveMicPosTagInfo, IESLiveMicDress;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMultiKTVAudioStageViewUser : NSObject

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) HTSLiveUser *rawUser;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (nonatomic) BOOL talking;
@property (retain, nonatomic) NSString *fanTicketStr;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isAfk;
@property (retain, nonatomic) IESLiveMicDress *micDress;
@property (retain, nonatomic) IESLiveMicPosTagInfo *tagInfo;

- (id)initWithOrder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;
- (void)dealloc;

@end
