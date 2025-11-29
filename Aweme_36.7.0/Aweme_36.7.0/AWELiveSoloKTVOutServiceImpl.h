@class NSString;

@interface AWELiveSoloKTVOutServiceImpl : NSObject <IESLiveSoloKTVOutService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishService;
- (id)shareService;
- (id)enterService;

@end
