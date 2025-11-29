@class NSString, HTSLiveUser;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLivePKGuestOperatePanelConfig : NSObject

@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveInteractUserModel> interactGuestUser;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titlePosition;
@property (nonatomic) unsigned long long optionItems;
@property (nonatomic) unsigned long long connectModeItems;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL showEmoji;
@property (nonatomic) unsigned long long sceneForGuest;
@property (nonatomic) BOOL isGameMode;

- (void).cxx_destruct;
- (id)init;

@end
