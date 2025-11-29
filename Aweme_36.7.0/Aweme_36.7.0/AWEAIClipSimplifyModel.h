@class NSString, AVAsset;

@interface AWEAIClipSimplifyModel : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *filePathString;
@property (retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *UUIDString;

- (void)generateUUIDStringIfNeeded;
- (id)mediaTypeString;
- (void).cxx_destruct;
- (id)description;

@end
