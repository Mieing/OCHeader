@class NSString, NSNumber;

@interface RTVEffectGameTerminateRequest : NSObject <RTVEffectGameReqModel>

@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSNumber *stage;
@property (retain, nonatomic) NSString *gameRoomID;
@property (retain, nonatomic) NSString *gameUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (id)modelWithRoomID:(id)a0 stage:(id)a1 gameRoomID:(id)a2 gameUniqueID:(id)a3;

- (id)paramsDictionary;
- (void).cxx_destruct;

@end
