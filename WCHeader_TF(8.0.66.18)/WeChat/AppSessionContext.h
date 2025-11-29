@class SdkUIContext;

@interface AppSessionContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) SdkUIContext *sdkId;
@property (nonatomic) unsigned long long scene;

+ (void)initialize;

@end
