@class NSArray;

@interface AWEBarrageResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) long long closeFriendUserCount;
@property (nonatomic) BOOL hasCommentNow;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
