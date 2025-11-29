@class NSString, LynxTemplateRender, BDLynxBridge;

@interface BDXPreCreateTemplateRenderContext : NSObject

@property (retain, nonatomic) LynxTemplateRender *templateRender;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) BDLynxBridge *bridge;

- (void).cxx_destruct;

@end
