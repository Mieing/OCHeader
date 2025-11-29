@class LynxTemplateData;

@interface LynxUpdateMeta : NSObject

@property (retain, nonatomic) LynxTemplateData *data;
@property (retain, nonatomic) LynxTemplateData *globalProps;

- (void).cxx_destruct;

@end
