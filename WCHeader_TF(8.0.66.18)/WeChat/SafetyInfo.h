@class NSMutableArray;

@interface SafetyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *devicelist;
@property (nonatomic) BOOL bHasVoice;
@property (nonatomic) BOOL bSwitchVoice;
@property (nonatomic) BOOL bHasFace;
@property (nonatomic) BOOL bSwitchFace;
@property (nonatomic) BOOL bHasWxPwd;

+ (void)initialize;

@end
