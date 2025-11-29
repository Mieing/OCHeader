@class NSNumber, NSArray;

@interface AWEOneDayStoryViewerModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
