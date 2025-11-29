@class NSString;

@interface AudienceLinkmicInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *functionType;
@property (copy, nonatomic) NSString *initInfoSetting;
@property (nonatomic) BOOL showInFirstScreen;

+ (id)descriptor;

@end
