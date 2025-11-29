@interface AWESearchWebVideoTranscodeTimeMonitor : NSObject

@property (nonatomic) long long clickTime;
@property (nonatomic) long long pageInitTime;
@property (nonatomic) long long pageStartTime;
@property (nonatomic) long long startTranscodeTime;
@property (nonatomic) long long transcodeDoneTime;
@property (nonatomic) long long startExtractAddressTime;
@property (nonatomic) long long extractAddressDoneTime;
@property (nonatomic) long long openTranscodePageTime;
@property (nonatomic) long long transcodePageOpenedTime;
@property (nonatomic) long long injectDoneTime;

@end
