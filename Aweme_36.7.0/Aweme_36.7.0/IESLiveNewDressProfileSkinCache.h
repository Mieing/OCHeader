@class NSString;

@interface IESLiveNewDressProfileSkinCache : NSCache <IESLiveNewDressResourceModelCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)dressType;

- (id)resourceForDressID:(id)a0;
- (BOOL)storeResource:(id)a0 forDressID:(id)a1 error:(id *)a2;
- (id)profileSkinResourceForDressID:(id)a0;
- (struct CGSize { double x0; double x1; })profileSkinWebPSizeFromConfig:(id)a0 resourceName:(id)a1;
- (id)init;

@end
