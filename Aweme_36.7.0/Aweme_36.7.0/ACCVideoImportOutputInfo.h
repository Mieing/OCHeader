@class NSString, AVAsset;

@interface ACCVideoImportOutputInfo : NSObject

@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *coverImageFilePath;

- (BOOL)isAVURLAsset;
- (BOOL)empty;
- (void).cxx_destruct;

@end
