@class NSDictionary, NSString;

@interface PIAMessageTypeCallBack : NSObject

@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long ID;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *errMsg;

- (void).cxx_destruct;
- (id)JSONString;
- (id)initWithDictionary:(id)a0;
- (id)JSONDictionary;

@end
