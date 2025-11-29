@class NSString, NSError;

@interface NPPresetAlgorithmFetchCallbackModel : NSObject

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *fileSize;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSString *resourceFile;
@property (nonatomic) BOOL isFromCache;
@property (retain, nonatomic) NSError *fetchError;

- (void).cxx_destruct;

@end
