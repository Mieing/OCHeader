@class AWETextModeApplyTemplateInput;

@interface AWETextModeApplyTemplateFlowParams : NSObject

@property (retain, nonatomic) AWETextModeApplyTemplateInput *inputConfig;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
