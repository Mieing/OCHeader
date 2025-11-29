@class LynxTemplateBundle, NSString, LynxTemplateData, NSData, UITextView, NSMutableData, LynxView;

@interface LynxPageReloadHelper : NSObject <LynxPageReloadHelperProto> {
    LynxView *_lynxView;
    unsigned char _initWithBinary;
    NSData *_binary;
    unsigned char _initWithUrl;
    NSString *_url;
    unsigned char _initWithBundle;
    LynxTemplateBundle *_bundle;
    LynxTemplateData *_initData;
    NSString *_fileUrl;
    UITextView *_textView;
    NSMutableData *_templateFragments;
    BOOL _ignoreCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataWithTemplateData:(id)a0;
- (void)attachLynxView:(id)a0;
- (id)initWithLynxView:(id)a0;
- (void)resetDataWithTemplateData:(id)a0;
- (void)setTextLable:(long long)a0;
- (void)loadFromLocalFile:(id)a0 withURL:(id)a1 initData:(id)a2;
- (void)loadFromURL:(id)a0 initData:(id)a1;
- (void)loadFromBundle:(id)a0 withURL:(id)a1 initData:(id)a2;
- (void)onTemplateLoadSuccess:(id)a0;
- (void)reloadLynxView:(BOOL)a0;
- (void)navigateLynxView:(id)a0;
- (void)reloadLynxView:(BOOL)a0 withTemplate:(id)a1 fromFragments:(BOOL)a2 withSize:(int)a3;
- (void)onReceiveTemplateFragment:(id)a0 withEof:(BOOL)a1;
- (void)reloadLynxView:(BOOL)a0 withTemplateBin:(id)a1;
- (id)getTemplateData;
- (void)removeTextLabel;
- (void)popTextLabel;
- (id)getTemplateJsInfo:(unsigned int)a0 withSize:(unsigned int)a1;
- (void).cxx_destruct;
- (id)getURL;

@end
