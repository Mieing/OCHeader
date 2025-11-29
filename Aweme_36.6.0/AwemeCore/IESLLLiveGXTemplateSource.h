@class NSString;

@interface IESLLLiveGXTemplateSource : NSObject <GXTemplateSourceProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTemplateInfoWithTemplateItem:(id)a0;
- (long long)priority;

@end
