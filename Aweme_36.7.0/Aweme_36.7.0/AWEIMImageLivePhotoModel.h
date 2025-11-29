@class NSString;

@interface AWEIMImageLivePhotoModel : NSObject <NSCopying>

@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *tkey;
@property (retain, nonatomic) NSString *skey;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) long long isNewEncrypt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContent:(id)a0;
- (id)contentDictionary;

@end
