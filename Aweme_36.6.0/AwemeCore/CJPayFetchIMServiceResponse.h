@class NSString;

@interface CJPayFetchIMServiceResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *linkChatUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
