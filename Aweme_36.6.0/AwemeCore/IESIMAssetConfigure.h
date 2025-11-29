@class PHAsset, NSString;

@interface IESIMAssetConfigure : NSObject <IESIMAssetConfigureInterface>

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *bpeaToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
