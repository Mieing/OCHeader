@class NSString, NSDictionary, NSArray;

@interface AWEEcomSearchRequest : NSObject

@property (nonatomic) unsigned long long searchType;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long requestMode;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL enableHTTPCache;
@property (copy, nonatomic) NSArray *formDataArray;

+ (id)defaultTextSearchRequest;
+ (id)defaultImageSearchRequest;

- (void).cxx_destruct;
- (id)init;

@end
