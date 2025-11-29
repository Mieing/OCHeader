@class NSString;

@interface AWECodeGenNearbyHotCommentElementModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) int userDigged;
@property (nonatomic) long long replyCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
