@class NSString;

@interface MJAssetDraftModel : NSObject <PBCoding>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *localIdentifier;
@property (copy, nonatomic) NSString *relativeFilePath;
@property (nonatomic) long long mediaType;
@property (nonatomic) BOOL isNeedOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_localIdentifier;
+ (void)PBArrayAdd_relativeFilePath;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_isNeedOrigin;
+ (void)initialize;
+ (id)modelWithAssetInfo:(id)a0;
+ (id)modelWithMMPHAsset:(id)a0;

@end
