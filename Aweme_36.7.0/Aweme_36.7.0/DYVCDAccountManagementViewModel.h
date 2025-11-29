@class NSString, NSArray, NSMutableSet, DYAVCDAccountModel;

@interface DYVCDAccountManagementViewModel : NSObject

@property (retain, nonatomic) NSString *hintText;
@property (nonatomic) unsigned long long loginPlatform;
@property (nonatomic) unsigned long long verifyType;
@property (retain, nonatomic) NSMutableSet *verifiedUids;
@property (copy, nonatomic) DYAVCDAccountModel *currentAccountModel;
@property (copy, nonatomic) DYAVCDAccountModel *hotsoonAccountModel;
@property (retain, nonatomic) NSArray *cellViewModels;

+ (Class)aDYAVCDServiceCommonAdapterClass;
+ (Class)aAWEUserCommonAdapterClass;

- (id)labelForPlatform:(unsigned long long)a0;
- (id)aDYAVCDServiceCommonAdapter;
- (unsigned long long)verifyTypeForPlatform:(unsigned long long)a0 currentAccount:(id)a1 targetAccount:(id)a2;
- (id)aAWEUserCommonAdapter;
- (id)switchAccount:(id)a0;
- (id)updateAccountList;
- (id)getAllAccountListWithUIDs:(id)a0;
- (void)sortForMultiAccountNoticesIfNeed;
- (long long)hasUnreadNoticeAccountNums;
- (BOOL)shouldUseVCDAccountOptimize;
- (void)updateVCDVerifiedUid:(id)a0;
- (id)hintTextWithPlatform:(unsigned long long)a0 counts:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
