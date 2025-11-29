@class NSNumber, NSArray, NSString;

@interface AWEHistoryPublicResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *awemes;
@property (copy, nonatomic) NSString *itemIDs;

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
