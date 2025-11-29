@class NSString, NSNumber, NSArray;

@interface AWENewHotSpotExtendDiscussionItem : AWEBaseApiModel

@property (copy, nonatomic) NSString *sentence;
@property (retain, nonatomic) NSNumber *sentenceID;
@property (retain, nonatomic) NSString *wordCoverUrl;
@property (nonatomic) BOOL isGray;
@property (retain, nonatomic) NSNumber *discussingPV;
@property (retain, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSString *dataSource;

+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
