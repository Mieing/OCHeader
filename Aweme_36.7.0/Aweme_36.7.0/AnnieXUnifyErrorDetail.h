@class NSNumber, NSString;

@interface AnnieXUnifyErrorDetail : NSObject

@property (nonatomic) long long jsExceptionCount;
@property (nonatomic) long long nativeErrorCount;
@property (nonatomic) long long resLoaderErrorCount;
@property (nonatomic) long long resLoaderErrorTemplateCount;
@property (nonatomic) long long staticCount;
@property (nonatomic) long long fetchErrorCount;
@property (nonatomic) long long jsbErrorCount;
@property (retain, nonatomic) NSNumber *unifyErrorCode;
@property (copy, nonatomic) NSString *unifyErrorMsg;

- (void).cxx_destruct;

@end
