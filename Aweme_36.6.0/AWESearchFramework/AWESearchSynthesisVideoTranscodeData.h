@class NSString, NSDictionary;

@interface AWESearchSynthesisVideoTranscodeData : NSObject

@property (copy, nonatomic) NSString *transcodeType;
@property (copy, nonatomic) NSDictionary *transcodeData;
@property (copy, nonatomic) NSDictionary *transcodeAddressData;
@property (nonatomic) long long transcodeDataSource;
@property (copy, nonatomic) NSString *serverVideoTranscodingData;

- (void).cxx_destruct;

@end
