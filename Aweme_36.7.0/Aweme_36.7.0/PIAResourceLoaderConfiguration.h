@class NSString, NSDictionary, NSURLRequest, PIAContext;

@interface PIAResourceLoaderConfiguration : NSObject

@property (copy, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSString *containerNameSpace;
@property (retain, nonatomic) NSDictionary *requestHeaderField;
@property (retain, nonatomic) NSDictionary *responseHeaderFiled;
@property (weak, nonatomic) PIAContext *context;
@property (weak, nonatomic) id engine;
@property (copy, nonatomic) NSString *source;

- (void).cxx_destruct;
- (id)init;

@end
