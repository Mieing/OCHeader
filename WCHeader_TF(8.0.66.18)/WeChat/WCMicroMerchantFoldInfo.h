@class NSArray, NSDate;

@interface WCMicroMerchantFoldInfo : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSDate *generatedTime;
@property (copy, nonatomic) NSArray *unfoldedUsernames;

- (id)initWithUnfoldUsernames:(id)a0 generatedTime:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
