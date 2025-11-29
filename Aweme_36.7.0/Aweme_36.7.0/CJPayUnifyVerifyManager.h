@class NSString, NSMutableArray;

@interface CJPayUnifyVerifyManager : NSObject <CJPayUnifyVerifyModule>

@property (retain, nonatomic) NSMutableArray *mutableControllers;
@property (retain, nonatomic) NSMutableArray *screenDetectVCArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)startVerifyWithConfig:(id)a0;
- (BOOL)screenDetectedOpen:(BOOL)a0 inViewController:(id)a1;
- (id)handleVerifyDataWithVerifyType:(unsigned long long)a0 params:(id)a1 context:(id)a2;
- (void)p_screenShotDetected;
- (void)p_screenCaptureDetected:(id)a0;
- (id)p_handlePasswordDataWithParams:(id)a0 withEngimaType:(unsigned long long)a1;
- (id)p_handleBioDataWithParams:(id)a0 withEngimaType:(unsigned long long)a1;
- (id)p_handleLiveDataWithParams:(id)a0 withEngimaType:(unsigned long long)a1;
- (id)p_handleCVVDataWithParams:(id)a0 withEngimaType:(unsigned long long)a1;
- (id)p_verifyEngimaImplWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
