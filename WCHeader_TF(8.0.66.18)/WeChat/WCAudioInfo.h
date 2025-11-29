@class NSString;

@interface WCAudioInfo : NSObject

@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *dataUrl;
@property (copy, nonatomic) NSString *decryptKey;
@property (nonatomic) BOOL isHls;
@property (nonatomic) BOOL useAVCore;
@property (nonatomic) float playRate;
@property (nonatomic) float startTime;
@property (nonatomic) BOOL isLocalFile;
@property (nonatomic) BOOL ignoreCache;
@property (copy, nonatomic) NSString *fileCacheId;
@property (retain, nonatomic) id userData;
@property (retain, nonatomic) NSString *refer;

- (id)init;
- (void).cxx_destruct;

@end
