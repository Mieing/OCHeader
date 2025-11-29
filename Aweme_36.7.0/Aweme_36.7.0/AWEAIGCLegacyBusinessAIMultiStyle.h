@class AWEAIGCLegacyBusinessContext, NSString;

@interface AWEAIGCLegacyBusinessAIMultiStyle : NSObject <AWEAIGCLegacyBusinessAIMultiStyleProtocol>

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recoverCellDownloadInfoIfNeeded;
- (void)applyMultiStyleEffect;
- (BOOL)handleAIMultiStyleApplyEffectIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)effect;
- (id)repository;

@end
