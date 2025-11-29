@class LynxTemplateData, NSString, LynxTemplateBundle, NSData, NSMutableDictionary;

@interface LynxLoadMeta : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long loadMode;
@property (nonatomic) long long loadOption;
@property (retain, nonatomic) NSData *binaryData;
@property (retain, nonatomic) LynxTemplateData *initialData;
@property (retain, nonatomic) LynxTemplateData *globalProps;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (retain, nonatomic) NSMutableDictionary *lynxViewConfig;

- (void).cxx_destruct;

@end
