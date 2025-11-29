@protocol IESLiveInteractUserModel;

@interface IESLiveInteractAnchorLinkerModel : NSObject

@property (nonatomic) unsigned long long selectedStyle;
@property (retain, nonatomic) id<IESLiveInteractUserModel> interactUser;
@property (nonatomic) long long status;
@property (nonatomic) BOOL showSelected;
@property (nonatomic) BOOL showPendingClickStyle;
@property (nonatomic) unsigned long long alignPosition;
@property (nonatomic) BOOL showChangeBtn;
@property (nonatomic) BOOL disableGenderDisplay;
@property (nonatomic) BOOL disableChangeBtn;
@property (nonatomic) BOOL disableAvatarBorder;
@property (nonatomic) BOOL disableSelect;

- (void).cxx_destruct;

@end
