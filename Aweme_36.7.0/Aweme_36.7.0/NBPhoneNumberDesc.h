@class NSString, NSArray, NSData;

@interface NBPhoneNumberDesc : NSObject

@property (readonly, nonatomic) NSString *nationalNumberPattern;
@property (readonly, nonatomic) NSString *possibleNumberPattern;
@property (readonly, nonatomic) NSArray *possibleLength;
@property (readonly, nonatomic) NSArray *possibleLengthLocalOnly;
@property (readonly, nonatomic) NSString *exampleNumber;
@property (readonly, nonatomic) NSData *nationalNumberMatcherData;
@property (readonly, nonatomic) NSData *possibleNumberMatcherData;

- (id)initWithNationalNumberPattern:(id)a0 withPossibleNumberPattern:(id)a1 withPossibleLength:(id)a2 withPossibleLengthLocalOnly:(id)a3 withExample:(id)a4 withNationalNumberMatcherData:(id)a5 withPossibleNumberMatcherData:(id)a6;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntry:(id)a0;

@end
