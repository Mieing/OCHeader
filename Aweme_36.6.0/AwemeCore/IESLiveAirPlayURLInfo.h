@class NSString;

@interface IESLiveAirPlayURLInfo : NSObject

@property (copy, nonatomic) NSString *resolutionName;
@property (copy, nonatomic) NSString *resolutionKey;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL enableEncryption;

- (void).cxx_destruct;

@end
