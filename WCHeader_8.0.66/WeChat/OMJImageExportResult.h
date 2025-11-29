@class NSDictionary;

@interface OMJImageExportResult : NSObject

@property (readonly, nonatomic) NSDictionary *outputImageFilePathsBySceneID;
@property (readonly, nonatomic) NSDictionary *outputVideoFilePathsBySceneID;

- (id)initWithOutputImageFilePathsBySceneID:(id)a0 outputVideoFilePathsBySceneID:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
