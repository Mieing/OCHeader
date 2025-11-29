@class NSError, NSString, NSDictionary;

@interface HMDFileUploadResult : NSObject

@property (nonatomic) int status;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSString *rateLimitMessage;
@property (nonatomic) unsigned long long uploadSize;
@property (retain, nonatomic) NSDictionary *responseDict;

- (void).cxx_destruct;

@end
