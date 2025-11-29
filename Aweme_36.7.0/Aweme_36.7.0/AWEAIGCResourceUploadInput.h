@class NSArray, NSString, AWEMediaExporterConfig;

@interface AWEAIGCResourceUploadInput : NSObject

@property (readonly, copy, nonatomic) NSArray *imagePaths;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) AWEMediaExporterConfig *exportConfig;

- (id)initWithImagePaths:(id)a0 videoPath:(id)a1 exportConfig:(id)a2;
- (void).cxx_destruct;

@end
