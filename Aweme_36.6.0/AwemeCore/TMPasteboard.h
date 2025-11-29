@class NSString;

@interface TMPasteboard : NSObject <TMPasteboardProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)readFeedbackWithCert:(id)a0;
+ (void)startPasteboardDevSuite;
+ (void)compatibleBpea;
+ (id)readPipeline;
+ (id)writePipeline;
+ (id)tm_errorCodeToRuleKeyMap;
+ (id)tm_readPasteboard:(id)a0 component:(id)a1;
+ (void)tm_readPipelineWithAPI:(SEL)a0 containsDataAPI:(SEL)a1 pasteboardName:(id)a2 pasteboardType:(id)a3 inItemSet:(id)a4 cert:(id)a5 fromHook:(BOOL)a6 completion:(id /* block */)a7;
+ (void)tm_writePipelineWithAPI:(SEL)a0 pasteboardName:(id)a1 setValue:(id)a2 pasteboardType:(id)a3 options:(id)a4 cert:(id)a5 fromHook:(BOOL)a6 error:(id *)a7;
+ (id)tm_errorWithCode:(long long)a0 message:(id)a1;
+ (id)tm_ruleKeyWithErrorCode:(long long)a0;
+ (id)readPasteboard:(id)a0;
+ (id)readPasteboardCache:(id)a0;
+ (void)writePasteboard:(id)a0;
+ (BOOL)containDataType:(id)a0;
+ (void)stringWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)stringsWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)urlWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)urlsWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)imageWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)imagesWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)colorWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)colorsWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)itemsWithCert:(id)a0 completion:(id /* block */)a1;
+ (void)dataForPasteboardType:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
+ (void)valueForPasteboardType:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
+ (void)dataForPasteboardType:(id)a0 inItemSet:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
+ (void)valuesForPasteboardType:(id)a0 inItemSet:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
+ (void)setString:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setStrings:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setURL:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setURLs:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setImage:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setImages:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setColor:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setColors:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setData:(id)a0 pasteboardType:(id)a1 cert:(id)a2 error:(id *)a3;
+ (void)setValue:(id)a0 pasteboardType:(id)a1 cert:(id)a2 error:(id *)a3;
+ (void)setItems:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)setItems:(id)a0 options:(id)a1 cert:(id)a2 error:(id *)a3;


@end
