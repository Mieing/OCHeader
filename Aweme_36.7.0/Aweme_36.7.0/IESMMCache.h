@class NSString, AVAsset;

@interface IESMMCache : NSObject

@property (retain, nonatomic) NSString *reverseMD5;
@property (retain, nonatomic) AVAsset *reverseAsset;
@property (retain, nonatomic) AVAsset *reverseSrcAsset;

+ (id)shareInstance;

- (void)clearReverse;
- (void).cxx_destruct;
- (id)init;

@end
