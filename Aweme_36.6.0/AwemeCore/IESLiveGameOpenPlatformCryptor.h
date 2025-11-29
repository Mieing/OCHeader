@class NSString, NSData;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformCryptor : NSObject <IESLiveGameOpenPlatformCryptorActions, IESLiveGameOpenPlatformCryptorInterface>

@property (readonly, copy, nonatomic) NSString *aes128IVSalt;
@property (readonly, copy, nonatomic) NSData *aes128CryptorIV;
@property (readonly, copy, nonatomic) NSString *aes128CryptorKey;
@property (readonly, copy, nonatomic) NSString *aes128CryptorKeySalt;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)didUpdateAES128CryptKey:(id)a0;
- (id)_generateAES128IVWithSalt:(id)a0 roomID:(id)a1;
- (id)_generateMD5WithAES128IV:(id)a0;
- (id)_aes128DecryptWithCipher:(id)a0 cryptKey:(id)a1 cryptKeySalt:(id)a2 IV:(id)a3;
- (BOOL)isAES128CryptKeyAvailable;
- (id)aes128DecryptWithCipher:(id)a0;
- (void).cxx_destruct;

@end
