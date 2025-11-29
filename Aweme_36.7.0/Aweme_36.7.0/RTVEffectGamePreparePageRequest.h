@class NSString;

@interface RTVEffectGamePreparePageRequest : NSObject <RTVEffectGameReqModel>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithRoomID:(id)a0 data:(id)a1;

- (id)paramsDictionary;
- (void).cxx_destruct;

@end
