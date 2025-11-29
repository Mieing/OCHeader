@class ACCFlowerRedPacketDataServiceAssetModel;

@interface ACCFlowerRedPacketDataServiceResult : NSObject

@property (nonatomic) BOOL isRequestSucceed;
@property (retain, nonatomic) ACCFlowerRedPacketDataServiceAssetModel *inputAsset;

+ (id)resultWithSucceedFlag:(BOOL)a0 inputAsset:(id)a1;

- (void).cxx_destruct;

@end
