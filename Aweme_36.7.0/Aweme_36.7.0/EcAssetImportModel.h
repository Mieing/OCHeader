@class NSString, PHAsset;

@interface EcAssetImportModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *localId;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL deleteOnEnd;
@property (retain, nonatomic) PHAsset *asset;

- (void).cxx_destruct;

@end
