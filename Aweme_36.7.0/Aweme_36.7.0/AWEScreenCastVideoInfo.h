@class NSString, NSArray, NSDictionary;

@interface AWEScreenCastVideoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSArray *cutImageUrlList;
@property (copy, nonatomic) NSArray *playInfos;
@property (nonatomic) double duration;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isExpired;

@end
