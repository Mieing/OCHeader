@class NSDictionary, NSString;

@interface AWEKnowledgeImageIncentiveService : HTSService <AWEKnowledgeImageIncentiveService>

@property (copy, nonatomic) NSDictionary *cacheDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentUserCache;
- (void)saveUserCache:(id)a0;
- (BOOL)shouldShowImageIncentiveForModel:(id)a0;
- (void)didShowImageIncentiveForModel:(id)a0;
- (void)willShowModel:(id)a0 withHashCode:(unsigned long long)a1;
- (void).cxx_destruct;

@end
