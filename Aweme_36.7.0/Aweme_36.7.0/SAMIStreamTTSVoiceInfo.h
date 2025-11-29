@class NSString;

@interface SAMIStreamTTSVoiceInfo : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *rate;
@property (nonatomic) double speechRate;

- (void).cxx_destruct;
- (id)init;

@end
