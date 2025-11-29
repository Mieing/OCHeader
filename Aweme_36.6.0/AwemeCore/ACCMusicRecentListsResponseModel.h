@class NSArray, NSString, NSSet;

@interface ACCMusicRecentListsResponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *detailList;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) NSSet *failedList;

+ (id)detailListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicList;
- (void).cxx_destruct;

@end
