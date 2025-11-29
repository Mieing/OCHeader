@class NSString;

@interface CSJOncallUploadModel : CSJBasicModel

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *upload_api;
@property (copy, nonatomic) NSString *alert_text;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
