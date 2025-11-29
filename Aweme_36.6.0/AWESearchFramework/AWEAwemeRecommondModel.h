@class AWELiveStreamURLModel, NSString, AWEUserModel, AWEURLModel;

@interface AWEAwemeRecommondModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long roomid;
@property (copy, nonatomic) NSString *roomidstr;
@property (nonatomic) long long streamid;
@property (nonatomic) long long owneruserid;
@property (nonatomic) long long usercount;
@property (nonatomic) long long likecount;
@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWELiveStreamURLModel *streamURL;

+ (id)coverJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)streamURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
