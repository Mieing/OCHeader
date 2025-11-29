@class BDImageXUploaderClient, NSMutableArray, NSString;

@interface BDPPluginBlankUploadImpl : NSObject <BDPImageUploadPluginDelegate>

@property (retain, nonatomic) BDImageXUploaderClient *clientTop;
@property (retain, nonatomic) BDImageXUploaderClient *partialBlankClientTop;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

@end
