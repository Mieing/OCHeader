@class NSString, AWEAwemeModel;

@interface AWENewStoryModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAwemeModel *story;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL isOfficialStory;
@property (nonatomic) BOOL hasFetched;
@property (nonatomic) long long index;
@property (nonatomic) long long itemCount;

+ (id)storyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
