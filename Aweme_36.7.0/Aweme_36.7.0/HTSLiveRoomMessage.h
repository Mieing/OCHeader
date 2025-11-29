@class NSString, HTSLiveCommon, NSMutableDictionary, HTSLivePublicAreaCommon, HTSLiveRoomMsgExtra;

@interface HTSLiveRoomMessage : IESLivePBBaseMessage

@property (retain, nonatomic) id ieslive_redEnvelope;
@property (nonatomic) BOOL isRisky;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL supprotLandscape;
@property (nonatomic) int roomMessageType;
@property (nonatomic) BOOL systemTopMsg;
@property (nonatomic) BOOL forcedGuarantee;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (copy, nonatomic) NSString *bizScene;
@property (retain, nonatomic) NSMutableDictionary *buriedPoint;
@property (readonly, nonatomic) unsigned long long buriedPoint_Count;
@property (retain, nonatomic) HTSLiveRoomMsgExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
