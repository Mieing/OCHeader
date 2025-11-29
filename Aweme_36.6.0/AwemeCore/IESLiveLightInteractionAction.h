@class IESLiveClickMob, NSString, NSMutableDictionary, HTSLiveTextPiece;

@interface IESLiveLightInteractionAction : IESLivePBBaseMessage

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSMutableDictionary *requestParams;
@property (readonly, nonatomic) unsigned long long requestParams_Count;
@property (retain, nonatomic) IESLiveClickMob *clickMob;
@property (nonatomic) BOOL hasClickMob;
@property (retain, nonatomic) HTSLiveTextPiece *afterClickPiece;
@property (nonatomic) BOOL hasAfterClickPiece;

+ (id)descriptor;

@end
