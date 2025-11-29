@class NSString, NSNumber;

@interface IESLiveProfileParamsModel : NSObject

@property (copy, nonatomic) NSString *targetUid;
@property (retain, nonatomic) NSString *anchorID;
@property (retain, nonatomic) NSString *requestFromStr;
@property (retain, nonatomic) NSString *secTargetUid;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *secAnchorID;
@property (nonatomic) long long requestFrom;
@property (retain, nonatomic) NSNumber *scene;
@property (retain, nonatomic) NSNumber *targetIdentity;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasProfileStyle;
@property (nonatomic) long long style;
@property (nonatomic) BOOL hasSmartSwitchVal;
@property (nonatomic) BOOL isOn;
@property (nonatomic) long long specialScene;
@property (retain, nonatomic) NSString *productIds;
@property (retain, nonatomic) NSNumber *optimizeIdentity;
@property (retain, nonatomic) NSNumber *ecomDslIdentity;
@property (retain, nonatomic) NSString *clickUserPosition;
@property (retain, nonatomic) NSNumber *currentIdentity;
@property (nonatomic) long long targetDisplayRole;
@property (nonatomic) BOOL isFromChatIntercom;
@property (nonatomic) BOOL isMyLive;
@property (nonatomic) BOOL isPreload;

- (id)getParams;
- (id)initWithTargetUid:(id)a0 anchorID:(id)a1;
- (void).cxx_destruct;

@end
