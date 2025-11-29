@class NSString;
@protocol AWEStudioComposerCreation;

@interface AWEStudioComposerExportCreationImpl : NSObject <AWEStudioComposerExportCreation>

@property (copy, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) id<AWEStudioComposerCreation> currentCreation;
@property (copy, nonatomic) id /* block */ setupComposerModelBlock;
@property (copy, nonatomic) id /* block */ setupScenarioConfigBlock;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
