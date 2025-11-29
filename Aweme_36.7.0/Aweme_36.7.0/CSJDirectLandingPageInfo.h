@class NSString;

@interface CSJDirectLandingPageInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *directLandingUrl;
@property (nonatomic) long long displayDuration;
@property (nonatomic) long long closeTime;
@property (nonatomic) long long show_type;
@property (nonatomic) long long page_type;

- (id)convertToPlayableInfo;
- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
