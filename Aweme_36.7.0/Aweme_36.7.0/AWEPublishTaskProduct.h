@class NSString, NSArray, NSDictionary;

@interface AWEPublishTaskProduct : MTLModel

@property (retain, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSArray *exportedFiles;
@property (copy, nonatomic) NSDictionary *uploadedUris;
@property (copy, nonatomic) NSArray *exportedFilesWithWatermark;

+ (id)retriveProductWithTaskId:(id)a0;
+ (BOOL)cacheProduct:(id)a0;
+ (BOOL)invalidateCache:(id)a0;

- (void).cxx_destruct;

@end
