@class NSString, EcLocalAssetModel, NSDictionary;
@protocol EcCoverFetchProtocol;

@interface EcUploadLocalAssetModel : NSObject

@property (retain, nonatomic) EcLocalAssetModel *localAsset;
@property (nonatomic) unsigned long long tagId;
@property (nonatomic) unsigned long long linkId;
@property (nonatomic) unsigned long long tagAddutcMS;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) struct CGSize { double width; double height; } coverTargetSize;
@property (weak, nonatomic) id<EcCoverFetchProtocol> coverFetchDelegate;
@property (retain, nonatomic) NSDictionary *customParam;

- (void)initCoverTargetSize;
- (id)initWithLocalAsset:(id)a0 tagId:(unsigned long long)a1 linkId:(unsigned long long)a2 tagAddutcMS:(unsigned long long)a3;
- (void).cxx_destruct;

@end
