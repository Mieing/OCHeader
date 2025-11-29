@class NSString;

@interface ACCPublishViewModelUtilServiceImpl : HTSService <ACCPublishViewModelUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExclusionSelected:(id)a0;
- (BOOL)isRepoModelModified:(id)a0;
- (id)exclusionSecUidList:(id)a0;
- (id)shareConversations:(id)a0;
- (BOOL)shouldLandingHangout:(id)a0;
- (long long)sharePlatform:(id)a0;

@end
