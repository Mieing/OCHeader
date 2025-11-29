@class NSString;

@interface AWEAIOriginalResponse : AWESearchResultCachalotDataResponse

@property (copy, nonatomic) NSString *askViewTitle;
@property (copy, nonatomic) NSString *askViewIconURL;
@property (copy, nonatomic) NSString *aiOriginalQuery;
@property (copy, nonatomic) NSString *aiOriginalQuerySchema;
@property (copy, nonatomic) NSString *aiOriginalSearchID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
