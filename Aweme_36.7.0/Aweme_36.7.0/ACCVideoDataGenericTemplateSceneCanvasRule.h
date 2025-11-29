@class NSString;

@interface ACCVideoDataGenericTemplateSceneCanvasRule : NSObject <ACCVideoDataCanvasRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateEditCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (id)updatePublishCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (struct CGSize { double x0; double x1; })generateSize:(id)a0 defaultSize:(struct CGSize { double x0; double x1; })a1 ratio:(double)a2 isPublish:(BOOL)a3 screenSize:(struct CGSize { double x0; double x1; })a4;


@end
