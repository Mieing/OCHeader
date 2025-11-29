@class NSString;

@interface WCAdLiveCheerIconInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) int sampleRate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
