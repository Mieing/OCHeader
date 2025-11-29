@class NSNumber, NSArray, _TtC12AWEStoryImpl16Story25MonthData;

@interface AWEStoryImpl.Story25TabListResponse : AWEBaseApiModel {
    void /* function */ monthList;
}

@property (nonatomic, retain) _TtC12AWEStoryImpl16Story25MonthData *activeData;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, retain) NSNumber *nextOffset;
@property (nonatomic, copy) NSArray *monthList;
@property (nonatomic, retain) NSNumber *storyTTL;

+ (id)activeDataJSONTransformer;
+ (id)monthListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
