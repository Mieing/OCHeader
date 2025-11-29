@class NSDictionary, NSArray;

@interface IESMMUploadParams : NSObject

@property (nonatomic) BOOL removeSourceMetadata;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSArray *sourceFilePaths;

- (void).cxx_destruct;
- (id)init;

@end
