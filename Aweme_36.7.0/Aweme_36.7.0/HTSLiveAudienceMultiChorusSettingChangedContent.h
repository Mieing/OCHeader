@class NSString;

@interface HTSLiveAudienceMultiChorusSettingChangedContent : IESLivePBBaseMessage

@property (nonatomic) BOOL open;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
