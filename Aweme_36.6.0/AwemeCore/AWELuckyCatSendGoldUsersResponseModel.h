@class NSString, NSArray;

@interface AWELuckyCatSendGoldUsersResponseModel : AWELiteBaseApiModel

@property (nonatomic) BOOL hasNext;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSArray *friendList;
@property (nonatomic) unsigned long long repayType;
@property (nonatomic) unsigned long long messageStyle;

+ (id)friendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
