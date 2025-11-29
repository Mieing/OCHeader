@class NSArray, NSString;

@interface AFDNewFriendWorkCountModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *friendList;
@property (copy, nonatomic) NSString *toastText;

+ (id)friendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
