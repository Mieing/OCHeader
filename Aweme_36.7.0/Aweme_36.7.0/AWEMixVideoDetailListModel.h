@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEMixVideoDetailListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *episodeListString;
@property (retain, nonatomic) NSArray *list;
@property (copy, nonatomic) NSDictionary *episodeList;
@property (retain, nonatomic) NSArray *mixCards;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *logPB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listJSONTransformer;
+ (id)mixCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
