@class NSString, NSMutableDictionary;

@interface WCFinderKeywordComponent : NSObject

@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSMutableDictionary *keywordMap;

+ (void)reportClickCommentKeyword:(struct WCFinderKeywordAction { long long x0; id x1; })a0 scene:(int)a1 fromVC:(id)a2 tid:(id)a3 indexPath:(id)a4 extra:(id)a5;
+ (void)reportExposeCommentKeyword:(struct WCFinderKeywordAction { long long x0; id x1; })a0 scene:(int)a1 fromVC:(id)a2 tid:(id)a3 indexPath:(id)a4 extra:(id)a5;
+ (void)reportExposeKeywordJumpInfo:(id)a0 scene:(int)a1 fromVC:(id)a2 tid:(id)a3 indexPath:(id)a4 extra:(id)a5;
+ (void)reportClickCommentJumpInfo:(id)a0 scene:(int)a1 action:(long long)a2 fromVC:(id)a3 tid:(id)a4 indexPath:(id)a5 extra:(id)a6;
+ (int)contextCommentSceneFromView:(id)a0;
+ (BOOL)isFinderKeywordJumpUrl:(id)a0;
+ (struct multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> { struct __tree<std::__value_type<NSString *, CGRect>, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>, std::allocator<std::__value_type<NSString *, CGRect>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, CGRect>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, CGRect>, WCFinderKeywordEqualId>> { unsigned long long x0; } x2; } x0; })keywordHiglightFrameInStyleArray:(id)a0;
+ (id)findKeywordInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withKeywordMap:(const void *)a1;

- (id)init;
- (id)initWithKeywordArray:(id)a0 componentId:(id)a1;
- (id)allKeywordInfos;
- (struct WCFinderKeywordAction { long long x0; id x1; })actionForKeywordUrl:(id)a0;
- (id)parseXMLForString:(id)a0;
- (id)paseContentFromNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void)parseNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 readContentTo:(id)a1;
- (id)_linkForKeywordId:(id)a0 text:(id)a1;
- (id)_displayIconForKeywordId:(id)a0;
- (id)ensureJumpInfoSearchWord:(id)a0 link:(id)a1;
- (void).cxx_destruct;

@end
