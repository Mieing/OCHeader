@class JSAPIPermissionBitSet, GeneralControlBitSet, DeepLinkBitSet;

@interface UrlPermission : NSObject <NSCoding>

@property (retain, nonatomic) JSAPIPermissionBitSet *m_permissionBitSet;
@property (retain, nonatomic) GeneralControlBitSet *m_generalControlBitSet;
@property (retain, nonatomic) DeepLinkBitSet *m_deepLinkBitSet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
