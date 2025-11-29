@class NSString, LynxTemplateBundle;

@interface AWEGrouponLifeFeedsLynxEmbeddedViewGroupManagerLoadConfig : NSObject

@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (nonatomic) BOOL enableParallelLoad;
@property (nonatomic) BOOL enableEngineReuse;

- (void).cxx_destruct;

@end
