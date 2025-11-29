@class NSArray, NSString, RTVEffectGameReqBizDataModel, NSNumber;

@interface RTVEffectGameCreateRequest : NSObject <RTVEffectGameReqModel>

@property (retain, nonatomic) NSNumber *roomIdentifier;
@property (copy, nonatomic) NSArray *toUserIdentifiers;
@property (retain, nonatomic) RTVEffectGameReqBizDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithRoomIdentifier:(id)a0 toUserIdentifiers:(id)a1 data:(id)a2;

- (id)paramsDictionary;
- (id)initWithRoomIdentifier:(id)a0 toUserIdentifiers:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end
