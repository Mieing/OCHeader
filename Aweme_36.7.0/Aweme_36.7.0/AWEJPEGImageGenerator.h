@class NSString;

@interface AWEJPEGImageGenerator : NSObject {
    NSString *kFigAppleMakerNote_AssetIdentifier;
    NSString *_path;
}

- (void)generateJPEGWithDestination:(id)a0 assetIdentifier:(id)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;

@end
