@class NSString, DeepLinkBitSet;

@interface DeepLinkDef : NSObject

@property (weak, nonatomic) id /* block */ linkBlock;
@property (retain, nonatomic, getter=getLink) NSString *link;
@property (retain, nonatomic) NSString *linkName;
@property (retain, nonatomic) DeepLinkBitSet *dlBitset;
@property (nonatomic) unsigned int flag;

+ (id)DeepLinkDefWithName:(id)a0 Link:(id)a1 PermissionBitSet:(unsigned long long)a2 LinkBlock:(id /* block */)a3 Flag:(unsigned int)a4;

- (id)init;
- (void)dealloc;
- (BOOL)isCallDelegate;
- (BOOL)isCallExtension;
- (void).cxx_destruct;

@end
