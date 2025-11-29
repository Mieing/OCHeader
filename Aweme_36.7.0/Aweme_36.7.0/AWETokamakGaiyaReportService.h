@class NSString;

@interface AWETokamakGaiyaReportService : HTSService <AWETokamakGaiyaReportProtocol>

@property (class, nonatomic) BOOL enable;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (void)setPreciseFuseToken:(id)a0 tokenType:(id)a1 payload:(id)a2 stage:(long long)a3;
+ (void)setPreciseFuseToken:(id)a0 tokenType:(id)a1 payload:(id)a2 stage:(long long)a3 timeout:(unsigned long long)a4;
+ (BOOL)preCheckParamsToken:(id)a0 tokenType:(id)a1 payload:(id)a2 stage:(long long)a3 timeout:(unsigned long long)a4;


@end
