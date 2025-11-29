@class NSArray;

@interface AFDMentionAwemeListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *mentionAwemeList;
@property (retain, nonatomic) NSArray *userAwemeIDUniqueMarks;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL loadPreviousHasPrevious;
@property (nonatomic) unsigned long long topTimeStampCursor;
@property (nonatomic) unsigned long long bottomTimeStampCursor;

+ (id)mentionAwemeListJSONTransformer;
+ (id)userAwemeIDUniqueMarksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
