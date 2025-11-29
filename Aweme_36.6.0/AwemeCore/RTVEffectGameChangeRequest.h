@class NSArray, NSString, RTVEffectGameReqBizDataModel, NSNumber;

@interface RTVEffectGameChangeRequest : NSObject <RTVEffectGameReqModel>

@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (retain, nonatomic) NSNumber *gameRoomIdentifier;
@property (copy, nonatomic) NSArray *toUseridentifiers;
@property (retain, nonatomic) RTVEffectGameReqBizDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithRoomIdentifier:(id)a0 gameRoomIdentifier:(id)a1 toUserIdentifiers:(id)a2 data:(id)a3;

- (id)paramsDictionary;
- (id)initWithRoomIdentifier:(id)a0 gameRoomIdentifier:(id)a1 toUserIdentifiers:(id)a2 data:(id)a3;
- (void).cxx_destruct;

@end
