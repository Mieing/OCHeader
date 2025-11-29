@class NSArray;

@interface AWEIMWatchOnceShowInfo : IESIMBaseApiModel

@property (retain, nonatomic) NSArray *showUsers;

+ (id)showUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
