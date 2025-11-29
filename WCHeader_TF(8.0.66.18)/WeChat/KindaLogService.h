@class NSString;

@interface KindaLogService : NSObject <MMKLogService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)verbose:(id)a0 content:(id)a1;
- (void)debug:(id)a0 content:(id)a1;
- (void)info:(id)a0 content:(id)a1;
- (void)warning:(id)a0 content:(id)a1;
- (void)error:(id)a0 content:(id)a1;

@end
