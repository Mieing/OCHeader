@class NSString, NSArray;

@interface AWEMiniLunaGetUserMixedCollectionsResponse : AWEBaseApiModel

@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *mixedInfos;
@property (nonatomic) long long totalNum;

+ (id)mixedInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
