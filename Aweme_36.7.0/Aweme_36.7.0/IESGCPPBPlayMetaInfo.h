@class NSString;

@interface IESGCPPBPlayMetaInfo : GPBMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *playDescSchema;
@property (copy, nonatomic) NSString *playLicenseSchema;
@property (copy, nonatomic) NSString *featureSchema;
@property (nonatomic) int exchangeRate;

+ (id)descriptor;

@end
