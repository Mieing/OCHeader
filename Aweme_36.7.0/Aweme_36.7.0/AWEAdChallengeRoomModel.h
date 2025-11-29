@class NSString, HTSLiveRoom;

@interface AWEAdChallengeRoomModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *packedRoomData;
@property (retain, nonatomic) HTSLiveRoom *roomDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
