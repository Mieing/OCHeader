@class NSArray, NSString;

@interface AWEInspirationSearchDetailResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *searchList;
@property (retain, nonatomic) NSArray *infoList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchAttachedInfo;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoListJSONTransformer;
+ (id)searchListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
