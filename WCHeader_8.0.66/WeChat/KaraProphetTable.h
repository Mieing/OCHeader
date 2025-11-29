@interface KaraProphetTable : WCDBTableHolder {
    Class WINQ;
}

- (id)initWithPath:(id)a0 tableName:(id)a1 tableClass:(Class)a2;
- (id)getBehaviorIdentified:(id)a0 includingFeatures:(BOOL)a1 happenedAfter:(id)a2 error:(id *)a3;
- (long long)insertOrIgnoreBehaviorThatHappened:(id)a0 error:(id *)a1;
- (long long)deleteBehavior:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorThatPredicted:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorThatPredictedIfNot:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorThatExtracted:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorThatPrepared:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorThatRecalled:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (long long)updateBehaviorUserInfo:(id)a0 happenedAfter:(id)a1 error:(id *)a2;
- (id)getBehaviorsForUploadingHappenedFrom:(id)a0 to:(id)a1 limit:(long long)a2 error:(id *)a3;
- (id)getBehaviorsForReportingHappenedFrom:(id)a0 to:(id)a1 limit:(long long)a2 error:(id *)a3;
- (id)getBehaviorsForRapidResponseReportingHappenedFrom:(id)a0 to:(id)a1 limit:(long long)a2 error:(id *)a3;
- (long long)deleteBehaviorsHappenedBefore:(id)a0 limit:(long long)a1 error:(id *)a2;
- (long long)pagesWithError:(id *)a0;

@end
