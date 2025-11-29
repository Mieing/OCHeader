@class MMAssetInfo;

@interface WCMomentsAssetOperation : NSObject <NSCopying>

@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (nonatomic) long long assetSource;
@property (nonatomic) long long operationType;

- (id)initWithAssetInfo:(id)a0 byType:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
