@class HTSLiveUser, NSString, IESLiveInteractiveEditSeatPanelViewModel, NSMutableArray;

@interface IESLiveInteractionEmojiPanelConfig : NSObject

@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) BOOL isFromCrossRoom;
@property (nonatomic) BOOL isFullyUseOption;
@property (nonatomic) BOOL isNotShowEmoji;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titlePosition;
@property (nonatomic) unsigned long long optionItems;
@property (retain, nonatomic) NSMutableArray *userOptions;
@property (nonatomic) unsigned long long connectModeItems;
@property (nonatomic) BOOL isOnlyAvatarEmojiForAnchor;
@property (retain, nonatomic) IESLiveInteractiveEditSeatPanelViewModel *editSeatNameViewModel;

- (void).cxx_destruct;
- (id)init;

@end
