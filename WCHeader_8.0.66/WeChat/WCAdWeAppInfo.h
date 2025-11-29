@class NSString;

@interface WCAdWeAppInfo : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *relativePagePath;
@property (nonatomic) unsigned int version;
@property (nonatomic) int miniProgramType;
@property (retain, nonatomic) NSString *prerenderWeappPath;
@property (nonatomic) BOOL needPrerender;
@property (nonatomic) BOOL relievedBuyFlag;
@property (nonatomic) BOOL flagshipFlag;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValidForJump;
- (void).cxx_destruct;

@end
