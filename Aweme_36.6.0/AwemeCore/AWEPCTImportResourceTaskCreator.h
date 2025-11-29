@class NSString;

@interface AWEPCTImportResourceTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (id /* block */)createSlidesHandler:(id)a0;
+ (void)trimMainVideoDuration:(id)a0 assets:(id)a1;


@end
