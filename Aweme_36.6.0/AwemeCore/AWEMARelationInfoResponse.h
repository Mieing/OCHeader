@class NSNumber;

@interface AWEMARelationInfoResponse : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *fromUserID;
@property (nonatomic) BOOL isFriend;

+ (id)isFriendJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
