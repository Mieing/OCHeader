@class NSString;

@interface CSJRewardAgainModel : NSObject

@property (nonatomic) long long againType;
@property (copy, nonatomic) NSString *preSessions;
@property (copy, nonatomic) NSString *playAgainRit;
@property (copy, nonatomic) NSString *buttonText;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
