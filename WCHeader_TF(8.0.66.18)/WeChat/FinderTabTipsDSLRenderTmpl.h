@class FinderTabTipsDSLRenderTmpl_GlobalAttr, NSMutableArray, FinderTabTipsDSLRenderTmpl_MultiLevelDSLRender;

@interface FinderTabTipsDSLRenderTmpl : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_GlobalAttr *orignalAttr;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_GlobalAttr *thumbnailAttr;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl_MultiLevelDSLRender *multiLevelDslRender;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (BOOL)isTextEnableClientThumbnailNodeContent:(id)a0;
+ (void)initialize;

- (void)setMultiLevelDslRender:(id)a0;
- (id)multiLevelDslRender;
- (void)setThumbnailAttr:(id)a0;
- (id)thumbnailAttr;
- (void)setOrignalAttr:(id)a0;
- (id)orignalAttr;
- (void)setNodes:(id)a0;
- (id)nodes;
- (id)archivedWCTValue;
- (BOOL)containAbbreviationTextNodeAsNodeStyle:(unsigned long long)a0 nodes:(id)a1;
- (BOOL)isValidDSLNodes;
- (BOOL)containsAvatarNode;

@end
