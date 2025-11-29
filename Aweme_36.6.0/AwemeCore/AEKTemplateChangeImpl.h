@class NSString;

@interface AEKTemplateChangeImpl : NSObject <AEKTemplateDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (copy, nonatomic) NSString *templateId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
