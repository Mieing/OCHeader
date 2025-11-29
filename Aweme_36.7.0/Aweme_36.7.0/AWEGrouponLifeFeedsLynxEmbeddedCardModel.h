@class NSString, LynxTemplateData, LynxTemplateBundle;

@interface AWEGrouponLifeFeedsLynxEmbeddedCardModel : NSObject

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *originURL;
@property (retain, nonatomic) LynxTemplateData *lynxInitData;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (nonatomic) BOOL enableEngineReuse;
@property (nonatomic) BOOL enableParallelLoad;
@property (nonatomic) long long loadMode;

- (id)copyLynxInitData;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)init;

@end
