@interface HMDPatchLocation : NSObject

@property (nonatomic) void *location;
@property (nonatomic) unsigned long long addend;
@property (nonatomic, getter=isWeakImport) BOOL weakImport;
@property (nonatomic) unsigned int metaData;
@property (readonly, nonatomic) unsigned int diversity;
@property (readonly, nonatomic) unsigned int high8;
@property (readonly, nonatomic) unsigned int authenticated;
@property (readonly, nonatomic) unsigned int key;
@property (readonly, nonatomic) unsigned int useAddrDiversity;

- (BOOL)supportSignPointer;
- (unsigned int)useAddrDiversity;
- (unsigned int)diversity;
- (unsigned long long)signPointer:(unsigned long long)a0 location:(void *)a1 useDiversity:(BOOL)a2 diversity:(unsigned short)a3 key:(unsigned char)a4;
- (unsigned int)high8;
- (id)initWithLocation:(void *)a0 addend:(unsigned long long)a1 metaData:(unsigned int)a2 weakImport:(BOOL)a3;
- (BOOL)patchReplacement:(void *)a0;
- (unsigned int)authenticated;
- (unsigned int)key;

@end
