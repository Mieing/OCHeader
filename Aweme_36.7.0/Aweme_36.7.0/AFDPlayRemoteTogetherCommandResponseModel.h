@class AFDPlayRemoteTogetherRoomMeta;

@interface AFDPlayRemoteTogetherCommandResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDPlayRemoteTogetherRoomMeta *roomMeta;

+ (id)roomMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
