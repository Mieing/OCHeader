@class NSString;

@interface MMFinderLiveConnectMicSilentSoloPkSelector : NSObject <MMFinderLiveConnectMicPkSelecting>

@property (copy, nonatomic) id /* block */ selectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0;
- (void)initiateSelection;
- (void).cxx_destruct;

@end
