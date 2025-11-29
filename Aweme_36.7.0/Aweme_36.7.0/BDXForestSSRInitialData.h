@class LynxTemplateData, BDXForestSSRBinaryFrame;

@interface BDXForestSSRInitialData : NSObject

@property (retain, nonatomic) LynxTemplateData *initialData;
@property (retain, nonatomic) BDXForestSSRBinaryFrame *frame;

- (id)initWithBinaryFrame:(id)a0;
- (void).cxx_destruct;
- (void)parse:(id *)a0;

@end
