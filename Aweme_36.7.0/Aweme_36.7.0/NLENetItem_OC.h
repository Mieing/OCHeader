@class NSDictionary, NSString;

@interface NLENetItem_OC : NSObject

@property (nonatomic) long long httpType;
@property (nonatomic) long long requestId;
@property (retain, nonatomic) NSDictionary *headerMap;
@property (retain, nonatomic) NSDictionary *queryMap;
@property (retain, nonatomic) NSString *contentType;
@property (nonatomic) char *body;
@property (nonatomic) long long bodyLength;

- (void).cxx_destruct;

@end
