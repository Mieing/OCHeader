@class NSMutableArray, NSMutableDictionary;

@interface GameWebViewRecord : NSObject

@property (retain, nonatomic) NSMutableArray *webviewControllerArray;
@property (retain, nonatomic) NSMutableDictionary *webviewControllerDic;

- (id)init;
- (id)pageId:(id)a0;
- (BOOL)isWebVCRecorded:(id)a0;
- (void)recordWebVc:(id)a0;
- (void)removeWebVc:(id)a0;
- (id)webVcAtIndex:(unsigned long long)a0;
- (id)webVcForPageId:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)objectArrayCnt;
- (void).cxx_destruct;

@end
