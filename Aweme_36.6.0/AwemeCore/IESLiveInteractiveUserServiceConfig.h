@class NSNumber, IESLiveInteractiveLinkService;
@protocol IESLiveRoomService;

@interface IESLiveInteractiveUserServiceConfig : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSNumber *channelID;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) Class modelClass;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (nonatomic) unsigned long long fullLinkModule;
@property (nonatomic) BOOL enableDataVersionCheck;

- (void).cxx_destruct;
- (id)init;

@end
