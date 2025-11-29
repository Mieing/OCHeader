@class NSNumber, NSString, NSArray;

@interface AWEMixCollectUserResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *noticeID;
@property (retain, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
