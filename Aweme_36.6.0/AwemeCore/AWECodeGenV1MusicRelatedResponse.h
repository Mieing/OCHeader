@class NSString, NSArray;

@interface AWECodeGenV1MusicRelatedResponse : AWEBaseResponseModel

@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (copy, nonatomic) NSString *backupMusicIds;
@property (copy, nonatomic) NSArray *musicArray;
@property (copy, nonatomic) NSArray *awemeFeedListModelArray;
@property (copy, nonatomic) NSArray *awemeMaterialListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
