@class NSString, NSMutableDictionary, MMLRUCache;

@interface WCColorMgr : NSObject <NSXMLParserDelegate> {
    NSString *m_colorName;
    MMLRUCache *m_cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock;
}

@property (retain, nonatomic) NSMutableDictionary *colorDic;
@property (retain, nonatomic) NSString *currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)isUsingSpecialConfig;
+ (void)setUseSpecialConfig:(BOOL)a0;

- (id)init;
- (id)colorNames;
- (void)loadColorFromXML;
- (void)loadSpecialColorFromXML;
- (void)loadNormalColorFromXML;
- (BOOL)loadColorFromXMLByPath:(id)a0;
- (id)getColorValueForName:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (BOOL)isWCColorWithName:(id)a0;
- (id)getColor:(id)a0;
- (id)hexStringToColorFromCache:(id)a0;
- (id)hexStringToColor:(id)a0;
- (void).cxx_destruct;

@end
