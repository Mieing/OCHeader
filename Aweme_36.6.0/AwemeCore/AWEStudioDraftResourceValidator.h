@class NSString;

@interface AWEStudioDraftResourceValidator : NSObject <AWEStudioDraftResourceValidatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)validateResourcesWithPublishModel:(id)a0 forContext:(long long)a1 validationLevel:(long long)a2 completion:(id /* block */)a3;
+ (BOOL)isValidDraft:(id)a0;
+ (void)collectNLEResourceInDraftFolder:(id)a0 pathSet:(id)a1 publishModel:(id)a2;
+ (id)nleResourcePathsInModel:(id)a0 draftFolder:(id)a1;
+ (BOOL)isTargetTrackType:(unsigned long long)a0;
+ (BOOL)shouldValidateResourcesWithPublishModel:(id)a0 forContext:(long long)a1;
+ (void)performValidateResourcesWithPublishModel:(id)a0 validationLevel:(long long)a1 completion:(id /* block */)a2;
+ (id)allResourcePathsForDraftFolder:(id)a0 publishModel:(id)a1;
+ (BOOL)validateResourcePaths:(id)a0 publishModel:(id)a1 validationLevel:(long long)a2;
+ (void)trackResourceValidationWithParams:(id)a0 publishModel:(id)a1;
+ (void)validateVideoAsset:(id)a0 publishModel:(id)a1 validationLevel:(long long)a2 completion:(id /* block */)a3;


@end
