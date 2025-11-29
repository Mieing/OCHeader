@class NSString, NSMutableString;

@interface MAEngineAdapterUtils : NSObject <NSXMLParserDelegate> {
    long long _diceRefCount;
    NSMutableString *_globalDBPath;
    BOOL _processingResNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void *)getSharedDataProvider;
+ (void)offlineWillUpdate:(id)a0 action:(int)a1;
+ (void)offlineDidUpdate:(id)a0 action:(int)a1 result:(BOOL)a2;
+ (id)sharedInstance;

- (void)parseGlobalDBDestPathWith:(id)a0;
- (BOOL)doUnzipGlobalDBTo:(id)a0 srcZipPath:(id)a1 srcZipMD5:(id)a2;
- (BOOL)initGlobalDB;
- (void)deInitDiceEngine;
- (void)initDiceEngineWithBaseMapServer:(id)a0 indoorServer:(id)a1 scaleFactor:(float)a2 renderSystemVersion:(int)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
