@class NSString, HTSLiveImage, HTSLiveInteractActingThemeRole, NSMutableArray;

@interface HTSLiveCrossRoomInteractActingInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) long long playId;
@property (nonatomic) int status;
@property (nonatomic) long long themeId;
@property (nonatomic) long long bgId;
@property (retain, nonatomic) HTSLiveImage *bgURL;
@property (nonatomic) BOOL hasBgURL;
@property (retain, nonatomic) HTSLiveInteractActingThemeRole *themeRole;
@property (nonatomic) BOOL hasThemeRole;
@property (nonatomic) BOOL showRoleNickName;
@property (retain, nonatomic) NSMutableArray *actingUserInfosArray;
@property (readonly, nonatomic) unsigned long long actingUserInfosArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
