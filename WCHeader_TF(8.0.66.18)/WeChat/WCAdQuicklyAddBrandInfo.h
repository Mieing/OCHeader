@class NSString;

@interface WCAdQuicklyAddBrandInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *brandUsername;
@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *brandHeadImageUrl;
@property (retain, nonatomic) NSString *brandDesc;
@property (retain, nonatomic) NSString *compatibleJumpUrl;
@property (nonatomic) BOOL brandDirectJump;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
