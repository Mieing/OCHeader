@class NSURL, NSMutableArray, NSMutableDictionary;

@interface QBWebPage : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) NSMutableDictionary *pageInfo;
@property (nonatomic) double timestamp;
@property (weak, nonatomic) id webview;
@property (nonatomic) BOOL finished;

+ (id)webpageWithURL:(id)a0;

- (id)init;
- (id)webItemWithURL:(id)a0 createWhenNotExist:(BOOL)a1;
- (void)addWebItemEvent:(id)a0;
- (void)addPageInfoWithKey:(id)a0 value:(id)a1 allowDuplicateKey:(BOOL)a2;
- (id)pageID;
- (id)JSONInfoWithDetail:(BOOL)a0;
- (id)dateDesForDate:(id)a0;
- (id)commonInfo;
- (void).cxx_destruct;

@end
