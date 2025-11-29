@class NSString, NSData, FinderJumpInfo_NativeNextObjectInfo;

@interface FinderJumpInfo_NativeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int nativeType;
@property (retain, nonatomic) NSString *necessaryParams;
@property (retain, nonatomic) NSData *necessaryBytesParams;
@property (retain, nonatomic) FinderJumpInfo_NativeNextObjectInfo *nextObjectInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setNextObjectInfo:(id)a0;
- (id)nextObjectInfo;
- (void)setNecessaryBytesParams:(id)a0;
- (id)necessaryBytesParams;
- (void)setNecessaryParams:(id)a0;
- (id)necessaryParams;
- (void)setNativeType:(unsigned int)a0;
- (unsigned int)nativeType;
- (id)archivedWCTValue;
- (BOOL)isEqual:(id)a0;

@end
