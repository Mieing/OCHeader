@class NSString, NSMutableArray;

@interface NanoCrashGuardConfig : NSObject {
    NSMutableArray *_guardVersions;
    BOOL _exception;
    NSString *_path;
}

+ (void)checkABTest:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void)addGuardVersionFrom:(id)a0 to:(id)a1;
- (void)clearGuardVersion;
- (void)setException:(BOOL)a0;
- (void)synchronize;
- (BOOL)isEnableGuard;
- (void).cxx_destruct;

@end
