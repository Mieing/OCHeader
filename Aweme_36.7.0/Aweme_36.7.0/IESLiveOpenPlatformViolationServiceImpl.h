@class NSString, NSHashTable;

@interface IESLiveOpenPlatformViolationServiceImpl : NSObject <IESLiveOpenPlatformViolationService>

@property (retain, nonatomic) NSHashTable *violationAppIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isViolation:(id)a0;
- (void)setViolation:(id)a0;
- (void).cxx_destruct;

@end
