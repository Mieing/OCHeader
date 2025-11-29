@class NSString, AWEURLModel;

@interface AWELiveCommentaryRoomInfo : AWEBaseApiModel

@property (nonatomic) long long userId;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long roomId;

+ (id)avatarJSONTransformer;
+ (id)parseModelFromOrigin:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
