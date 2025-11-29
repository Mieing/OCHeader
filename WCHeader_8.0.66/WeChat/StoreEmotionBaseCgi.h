@interface StoreEmotionBaseCgi : WCBaseCgi

@property (nonatomic) BOOL hasConfigDebugModelName;
@property (readonly, nonatomic) BOOL isRequesting;

- (id)init;
- (id)debugModuleName;
- (void)setDebugModuleName:(id)a0;
- (BOOL)startRequestWithRequest:(id)a0;

@end
