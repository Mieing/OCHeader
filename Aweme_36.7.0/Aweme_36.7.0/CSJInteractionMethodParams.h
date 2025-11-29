@class NSString;

@interface CSJInteractionMethodParams : NSObject

@property (copy, nonatomic) NSString *loadingText;
@property (nonatomic) long long onlylpLoadingMaxtime;
@property (nonatomic) long long straightLpShowtime;

- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
