@class NSString;

@interface IESGCPPBRankListAdditionalModel : GPBMessage

@property (copy, nonatomic) NSString *rankNum;
@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *rankNumImage;
@property (copy, nonatomic) NSString *rankNameImage;
@property (copy, nonatomic) NSString *rankNumColor;
@property (copy, nonatomic) NSString *rankNameColor;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) long long rankListType;
@property (copy, nonatomic) NSString *rankBgImg;

+ (id)descriptor;

@end
