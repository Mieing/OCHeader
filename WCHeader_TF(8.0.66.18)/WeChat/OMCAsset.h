@class NSString, PHAsset;

@interface OMCAsset : NSObject

@property (readonly, nonatomic) NSString *phLocalIdentifier;
@property (readonly, nonatomic) unsigned long long livePhotoUsage;
@property (readonly, nonatomic) BOOL isMediaSubtypeLivePhoto;
@property (readonly, nonatomic) PHAsset *phAsset;

- (id)initWithPHAsset:(id)a0;
- (id)initWithPHAsset:(id)a0 livePhotoUsage:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
