@class NSString, NSDictionary;

@interface TTRequestModel : NSObject

@property (retain, nonatomic) NSString *_host;
@property (retain, nonatomic) NSString *_uri;
@property (retain, nonatomic) NSString *_method;
@property (copy, nonatomic) NSDictionary *_params;
@property (retain, nonatomic) NSString *_response;
@property (copy, nonatomic) id /* block */ _bodyBlock;
@property (nonatomic) BOOL _isNoNeedCommonParams;
@property (retain, nonatomic) NSDictionary *_additionGetParams;
@property (copy, nonatomic) NSString *_fullNewURL;

- (id)_requestURIStr;
- (void).cxx_destruct;
- (id)init;
- (id)_requestURL;
- (id)_requestMethod;
- (id)_requestParams;

@end
