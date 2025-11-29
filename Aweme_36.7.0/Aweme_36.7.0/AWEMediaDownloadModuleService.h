@class NSString;

@interface AWEMediaDownloadModuleService : HTSService <AWEMediaDownloadModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaDownloadLoadingViewWithType:(long long)a0 title:(id)a1;
- (id)downloadChannel;

@end
