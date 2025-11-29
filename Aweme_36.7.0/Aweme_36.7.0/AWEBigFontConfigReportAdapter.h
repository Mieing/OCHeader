@class NSString;

@interface AWEBigFontConfigReportAdapter : NSObject <AWEBigFontConfigReportAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)reportElderModeConfig:(BOOL)a0;
- (void)reportBigFontModeConfig:(id)a0;
- (BOOL)canRequestSetSettings;
- (long long)largeCharacterSizeWithFontStyle:(id)a0;
- (id)weakTarget;

@end
