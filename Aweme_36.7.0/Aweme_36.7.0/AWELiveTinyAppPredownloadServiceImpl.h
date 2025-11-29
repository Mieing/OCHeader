@class NSString;

@interface AWELiveTinyAppPredownloadServiceImpl : NSObject <IESLiveTinyAppPredownloadService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ies_tinyAppPredownloadWithURL:(id)a0 callback:(id /* block */)a1;

@end
