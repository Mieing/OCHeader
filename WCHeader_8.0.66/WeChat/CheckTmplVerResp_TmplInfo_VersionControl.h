@class NSString;

@interface CheckTmplVerResp_TmplInfo_VersionControl : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fullVersion;
@property (nonatomic) BOOL forceH5;

+ (void)initialize;

- (void)setForceH5:(BOOL)a0;
- (BOOL)forceH5;
- (void)setFullVersion:(id)a0;
- (id)fullVersion;

@end
