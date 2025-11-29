@class NSString, AWEIMLiveGroupOwnRoomModel, AWEURLModel;

@interface AWEIMLiveGroupUserModel : AWEBaseApiModel

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *userNickname;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (retain, nonatomic) AWEIMLiveGroupOwnRoomModel *ownRoom;
@property (nonatomic) long long secret;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *text;

+ (id)urlModelJSONTransformer;
+ (id)ownRoomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
