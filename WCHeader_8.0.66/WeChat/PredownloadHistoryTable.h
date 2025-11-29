@interface PredownloadHistoryTable : WCDBTableHolder {
    Class WINQ;
}

- (id)initWithPath:(id)a0 tableName:(id)a1 tableClass:(Class)a2;
- (long long)insertOrIgnoreRecord:(id)a0 error:(id *)a1;
- (id)selectRecord:(id)a0 error:(id *)a1;
- (id)dequeueForConsumingRequestedQuotaAfterDate:(id)a0 maxRetries:(long long)a1 error:(id *)a2;
- (id)dequeueForConsumingIncreasedQuotaAfterDate:(id)a0 error:(id *)a1;
- (id)skipQuotaRecordsAfterDate:(id)a0 limit:(long long)a1 error:(id *)a2;
- (long long)updateRecord:(id)a0 serverPriority:(long long)a1 error:(id *)a2;
- (long long)updateRecord:(id)a0 skipQuota:(BOOL)a1 downloadState:(long long)a2 error:(id *)a3;
- (long long)updateRecord:(id)a0 sizeThatStartPredownload:(long long)a1 downloadRetries:(long long)a2 downloadState:(long long)a3 error:(id *)a4;
- (long long)updateRecord:(id)a0 downloadState:(long long)a1 error:(id *)a2;
- (id)requiredQuotaGroupByPriorityAfterDate:(id)a0 maxRetries:(long long)a1 error:(id *)a2;
- (long long)deleteRecordsBeforeDate:(id)a0 limit:(long long)a1 error:(id *)a2;

@end
