@class PubKeyInfo, NSString, NSRecursiveLock;

@interface WCAccountSignHelper : NSObject

@property (retain, nonatomic) NSRecursiveLock *signKeyLock;
@property (retain, nonatomic) PubKeyInfo *pubKeyInfoForECDSA;
@property (nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } privateKeyForECDSA;
@property (nonatomic) unsigned long long pubkeyLastUpdateTime;
@property (retain) NSString *lastUploadPubKeyCgiName;

- (id)init;
- (id)logInfos;
- (void)updateUploadPubKeyCgiName:(id)a0;
- (id)ecdsaSignWithData:(id)a0;
- (void)makeSureOkAfterLogin;
- (id)pubKeyInfoForECDSAUpdateIfNeeded;
- (id)pubKeyInfoWithoutUpdate;
- (void)createEcdsaKeyPairIfNeededWithNeedTryUpdate:(BOOL)a0;
- (BOOL)createPubkey;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
