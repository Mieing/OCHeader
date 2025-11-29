@class NSNumber, NSString;

@interface RTVEffectGameReadyRequest : NSObject <RTVEffectGameReqModel>

@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *gameRoomIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithRoomIdentifier:(id)a0 gameRoomIdentifier:(id)a1;

- (id)paramsDictionary;
- (id)initWithRoomIdentifier:(id)a0 gameRoomIdentifier:(id)a1;
- (void).cxx_destruct;

@end
