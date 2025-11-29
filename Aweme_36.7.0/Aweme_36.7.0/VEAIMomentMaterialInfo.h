@class VEAIMomentContentInfo, VEAIMomentMetaInfo;

@interface VEAIMomentMaterialInfo : NSObject

@property (nonatomic) long long materialId;
@property (retain, nonatomic) VEAIMomentMetaInfo *metaInfo;
@property (retain, nonatomic) VEAIMomentContentInfo *contentInfo;

- (void).cxx_destruct;

@end
