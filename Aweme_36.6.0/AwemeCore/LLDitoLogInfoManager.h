@class NSSet, NSArray, NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoLogInfoManager : NSObject <LLDitoExtensionProtocol>

@property (copy, nonatomic) NSSet *errorLevelSet;
@property (copy, nonatomic) NSSet *warnLevelSet;
@property (copy, nonatomic) NSSet *infoLevelSet;
@property (copy, nonatomic) NSSet *consoleTypeSet;
@property (copy, nonatomic) NSSet *staticsTypeSet;
@property (copy, nonatomic) NSSet *warningTypeSet;
@property (copy, nonatomic) NSSet *allTypeSet;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (nonatomic) unsigned long long maxLogLevel;
@property (copy, nonatomic) NSArray *blackLevelList;
@property (copy, nonatomic) NSArray *whiteLevelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)didReceiveValidLog:(id)a0;
- (void)didReceiveLogInfo:(id)a0;
- (unsigned long long)levelWithDitoErrorType:(id)a0;
- (unsigned long long)reportTypeWithDitoErrorType:(id)a0;
- (void).cxx_destruct;

@end
