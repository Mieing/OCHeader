@class NSString;

@interface AUCSyncModelTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)p_syncInfoFromPageCamera:(id)a0 toCreationContext:(id)a1;
+ (void)p_syncInfoFromPageEditor:(id)a0 toCreationContext:(id)a1;


@end
