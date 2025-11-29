@class NSString;

@interface AWEPCTAlbumInputDataContextTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)setupMultiSelect:(id)a0 composerModel:(id)a1;
+ (void)syncNativeAlbumConfigIfNeededWithModel:(id)a0 albumInputData:(id)a1;


@end
