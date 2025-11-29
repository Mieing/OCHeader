@class NSString;

@interface HMDJSONToken : NSObject

@property (nonatomic) int tokenType;
@property (copy, nonatomic) NSString *tokenValue;
@property (nonatomic) long long tokenLength;

- (id)initWithTokenType:(int)a0 tokenValue:(id)a1;
- (void).cxx_destruct;

@end
