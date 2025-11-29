@interface AWEProfileUserDetailComponent : AWEUserDetailBaseComponent

@property (nonatomic) BOOL hasReportedVisit;

- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)reportUserDetailVisitIfNeeded:(id)a0;

@end
