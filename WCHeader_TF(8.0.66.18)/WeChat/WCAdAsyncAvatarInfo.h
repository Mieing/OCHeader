@class NSString;

@interface WCAdAsyncAvatarInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isEqualToAvatarInfo:(id)a0;
- (void).cxx_destruct;

@end
