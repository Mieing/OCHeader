@class NSString, NSData;

@interface TRTCPayloadPrivateEncryptionConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long encryptionAlgorithm;
@property (copy, nonatomic) NSString *encryptionKey;
@property (retain, nonatomic) NSData *encryptionSalt;

- (struct PayloadPrivateEncryptionConfig { BOOL x0; int x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x3; struct weak_ptr<trtc::EncodedDataInterface> { struct EncodedDataInterface *x0; struct __shared_weak_count *x1; } x4; })convertToCppConfig:(BOOL)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
