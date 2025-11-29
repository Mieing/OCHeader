@class NSString;

@interface AWEIMShareRefactoringBridgeService : NSObject <AWEIMShareRefactoringBridgeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)imShareTitleFontSize;
- (double)imShareGoodsTitleFontSize;
- (id)shareRiskWarningTextWithModel:(id)a0 fontSize:(double)a1;
- (void)markShareModel:(id)a0;
- (id)identifierWithShareModel:(id)a0 moduleType:(long long)a1 indexPath:(id)a2;
- (id)shareTypeToImplMap;
- (void)removeWithShareModel:(id)a0 completeBlock:(id /* block */)a1;

@end
