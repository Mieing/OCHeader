@class NSString, ChatBotResData;

@interface ChatBotResMgr : NSObject

@property (nonatomic) BOOL isLocal;
@property (retain, nonatomic) NSString *kLocalTag;
@property (retain, nonatomic) ChatBotResData *data;

+ (id)sharedInstance;

- (id)initPrivate;
- (BOOL)isResReady;
- (id)getResPath;
- (BOOL)loadConfig:(id)a0;
- (BOOL)loadConfig;
- (double)getStandardLength;
- (id)getString:(id)a0;
- (id)getImage:(id)a0;
- (id)getSvg:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (BOOL)loadStringConfig:(id)a0;
- (BOOL)loadSvgConfig:(id)a0;
- (BOOL)loadImageConfig:(id)a0;
- (BOOL)loadOptionsConfig:(id)a0;
- (id)parseConfigJson:(id)a0;
- (void).cxx_destruct;

@end
