@class NSString, NSDictionary;

@interface AWEAIGCBusinessTemplateResultModel : AWEAIGCBaseBusinessCustomModel

@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDictionary *resources;
@property (copy, nonatomic) NSString *coverPath;
@property (retain, nonatomic) NSDictionary *images;

- (void).cxx_destruct;

@end
