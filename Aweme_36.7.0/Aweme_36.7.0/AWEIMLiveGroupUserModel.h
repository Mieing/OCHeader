@class NSString, AWEURLModel;

@interface AWEIMLiveGroupUserModel : AWEBaseApiModel

@property (nonatomic) long long userId;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (nonatomic) long long secret;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *text;

+ (id)urlModelJSONTransformer;
+ (id)ownRoomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
