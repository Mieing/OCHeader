@class NSString, AWEAwemeModel;

@interface AFDCloseFriendContainerModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *moment;
@property (nonatomic) BOOL hasFetched;
@property (retain, nonatomic) NSString *itemID;

+ (id)momentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
