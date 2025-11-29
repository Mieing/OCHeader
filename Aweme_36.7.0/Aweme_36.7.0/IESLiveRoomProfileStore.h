@class HTSEventContext, NSString, IESLiveComponentContext, HTSLiveImage, HTSLiveUser_Border, HTSLiveDouplusMessage, IESLiveRoomProfileOperationViewModel, NSNumber, IESLiveRoomProfileInfoViewModel;
@protocol IESLiveRoomService;

@interface IESLiveRoomProfileStore : NSObject

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveRoomProfileOperationViewModel *operationModel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly, nonatomic) IESLiveRoomProfileInfoViewModel *infoModel;
@property (nonatomic) unsigned long long mSeqLayout;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) HTSLiveDouplusMessage *douPlusMessage;
@property (nonatomic) BOOL isInTempState;
@property (nonatomic) BOOL isInAnnounceShow;
@property (nonatomic) BOOL isAnnounceShowed;
@property (readonly, nonatomic) NSString *nickName;
@property (readonly, nonatomic) HTSLiveImage *avatarImage;
@property (readonly, nonatomic) HTSLiveUser_Border *avatarBorder;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) HTSLiveImage *authenticationInfo;
@property (readonly, nonatomic) long long animationType;
@property (readonly, nonatomic) long long fansClubType;
@property (readonly, nonatomic) NSString *backgrounColor;
@property (readonly, nonatomic) long long followStatus;
@property (nonatomic) BOOL usePlatformData;

- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)startTempStateIfNeed;
- (BOOL)isRoomVaild;
- (BOOL)liveProfileViewOpt;
- (void)followUser:(id)a0 isMseqChannel:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)clearObserver;

@end
