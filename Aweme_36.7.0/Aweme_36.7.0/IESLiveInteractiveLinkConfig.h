@class NSString, IESLiveInterativeTimeOutConfig, NSArray;
@protocol IESLiveRoomService, IESLiveInteractiveLinkAPI;

@interface IESLiveInteractiveLinkConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long fallBackScene;
@property (retain, nonatomic) id<IESLiveInteractiveLinkAPI> linkAPI;
@property (copy, nonatomic) NSString *basePath;
@property (nonatomic) BOOL openInviteTimer;
@property (nonatomic) BOOL openApplyTimer;
@property (nonatomic) BOOL openListChangeTimer;
@property (nonatomic) long long listChangeMaxTime;
@property (nonatomic) long long listChangeCountLimit;
@property (readonly, nonatomic) IESLiveInterativeTimeOutConfig *timeOutConfig;
@property (nonatomic) BOOL enableSpecificLinkmicMethodType;
@property (copy, nonatomic) NSArray *linkmicMethodType;

- (id)linkmicMethodTypeDescription;
- (void).cxx_destruct;
- (id)init;

@end
