@class NSMutableArray;

@interface AWEVoteStickerDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
