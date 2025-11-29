@class NSString, NSDictionary, HTSEventContext, NSNumber;

@interface IESLiveUserFollowModel : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *userIDStr;
@property (retain, nonatomic) NSString *secUserId;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *fromPre;
@property (retain, nonatomic) NSString *fromLabel;
@property (retain, nonatomic) NSString *fromAction;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isSecret;
@property (nonatomic) BOOL isFIFARoom;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithUserID:(id)a0 secUserId:(id)a1 roomID:(id)a2 followScene:(long long)a3;
- (id)initWithUserID:(id)a0 secUserId:(id)a1 roomID:(id)a2 isSecret:(int)a3 trackContext:(id)a4 followScene:(long long)a5;
- (id)initWithUserIDStr:(id)a0 secUserId:(id)a1 roomID:(id)a2 followScene:(long long)a3;
- (id)initWithUserIDStr:(id)a0 secUserId:(id)a1 roomID:(id)a2 isSecret:(int)a3 trackContext:(id)a4 followScene:(long long)a5;
- (id)initWithUserID:(id)a0 secUserId:(id)a1 roomID:(id)a2 isSecret:(int)a3 trackContext:(id)a4 fromPre:(id)a5 fromLabel:(id)a6 fromAction:(id)a7;
- (void)changeParamsPreFromTrackParams:(id *)a0;
- (id)paramsLabel:(long long)a0;
- (void).cxx_destruct;

@end
