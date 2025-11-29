@class NSString;

@interface AWEProfileQualityIssueDetailComponent : AWEProfileQualityIssueBaseComponent <AWEUserDetailControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onDidRequestUser:(id)a0 error:(id)a1;

@end
