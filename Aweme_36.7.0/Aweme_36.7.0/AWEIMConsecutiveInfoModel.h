@class NSString, NSAttributedString;

@interface AWEIMConsecutiveInfoModel : NSObject <NSCopying, NSCoding>

@property (nonatomic) long long chatDays;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSString *levelString;
@property (nonatomic) long long recoverydays;
@property (nonatomic) long long recoveryDdl;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL canShowPetElfIcon;
@property (copy, nonatomic) NSString *flamePetElfIconName;
@property (nonatomic) BOOL canShowPreLevelIcon;
@property (copy, nonatomic) NSString *preLevelString;
@property (nonatomic) BOOL preLevelIsActive;
@property (copy, nonatomic) NSAttributedString *streakDescText;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
