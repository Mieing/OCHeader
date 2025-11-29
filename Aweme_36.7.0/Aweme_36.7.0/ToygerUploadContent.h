@class ToygerMeta, ToygerBlob;

@interface ToygerUploadContent : ToygerBaseModel

@property (retain, nonatomic) ToygerMeta *meta;
@property (retain, nonatomic) ToygerBlob *blob;

- (id)uploadData;
- (id)uploadString;
- (BOOL)loadMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
