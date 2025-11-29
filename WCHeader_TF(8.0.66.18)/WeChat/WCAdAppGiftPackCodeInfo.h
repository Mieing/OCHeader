@class NSString;

@interface WCAdAppGiftPackCodeInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *appGiftPackCode;
@property (retain, nonatomic) NSString *appGiftPackCodeTips;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
