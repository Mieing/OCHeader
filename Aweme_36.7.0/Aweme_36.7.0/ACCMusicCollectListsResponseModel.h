@class NSArray, NSNumber, NSString;

@interface ACCMusicCollectListsResponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *mcList;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *cursorNew;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long hasMoreBitStatus;

+ (id)hasMoreJSONTransformer;
+ (id)mcListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
