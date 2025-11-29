@class LynxTemplateData, NSString, NSDictionary, NSData, LynxTemplateBundle, NSArray;

@interface BDXSeperateRenderConfig : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) LynxTemplateData *initialData;
@property (nonatomic) BOOL enablePendingJsTask;
@property (nonatomic) BOOL enableMultiAsyncThread;
@property (retain, nonatomic) NSData *templateData;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) double fontScale;
@property (nonatomic) long long enableSeperateSSR;
@property (copy, nonatomic) id /* block */ firstScreenCompletion;
@property (nonatomic) double preferredLayoutWidth;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) id /* block */ builderBlock;
@property (copy, nonatomic) id /* block */ tasmFinishCompletion;
@property (copy, nonatomic) id /* block */ rawViewBuilderBlock;

- (void).cxx_destruct;

@end
