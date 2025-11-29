@class NSMutableArray;

@interface BypSyncKeyBuff : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *syncKeyPairList;
@property (nonatomic) BOOL reset;

+ (void)initialize;

- (void)setReset:(BOOL)a0;
- (BOOL)reset;
- (void)setSyncKeyPairList:(id)a0;
- (id)syncKeyPairList;

@end
