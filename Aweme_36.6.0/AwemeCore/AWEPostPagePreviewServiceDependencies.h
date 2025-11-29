@class NSString;

@interface AWEPostPagePreviewServiceDependencies : AWEPostPageBaseServiceDependencies <AWEPostPagePreviewServiceDependencies>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)player;
- (id)preview;
- (id)router;
- (id)post;
- (id)util;

@end
