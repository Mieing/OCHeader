@class NSString, FavoritesItem, WNContentStorage, NSMutableArray;

@interface WNHtmlStringBuilder : MMObject {
    FavoritesItem *m_favItem;
    WNContentStorage *m_content;
    NSMutableArray *m_fontAttributes;
    BOOL m_bInList;
    NSString *m_remainHTML;
    BOOL m_bStop;
}

- (id)initWithWNItem:(id)a0 withContent:(id)a1 withRemainHTML:(id)a2 bInList:(BOOL)a3;
- (void)startBuildHtmlString;
- (void)asyncBuildHtmlString;
- (id)tryBuildListStartTagWithPreListAttribute:(id)a0 withCurrentListAttribute:(id)a1;
- (id)tryBuildListEndTagAtLocation:(unsigned long long)a0 WithPreListAttribute:(id)a1 withCurrentListAttribute:(id)a2;
- (id)buildSpanElementWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 plainText:(id)a1;
- (void)stopBuildHtmlString;
- (void).cxx_destruct;

@end
