@class NSString;

@interface UnisusSecurityManager : NSObject <UnisusSecurityService>

@property (nonatomic) BOOL hasReceivedMemoryWarning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)encodeTextWithString:(id)a0 salt:(id)a1;
- (long long)patchFilesWithOldFilePath:(id)a0 newFilePath:(id)a1 patchFilePath:(id)a2 expectMD5:(id)a3;
- (BOOL)isSensitiveWordACAutoTrieEnable;
- (void)cleanSensitiveWordACAutoTrie;
- (BOOL)initiateSensitiwordACAutoTrieWithConfiguration:(id)a0;
- (id)searchSensitiveWordsInString:(id)a0;
- (id)decodeAndMaskSensitiveWordsInString:(id)a0 metrics:(id *)a1;
- (void)didReceiveMemoryWarning:(unsigned long long)a0;

@end
