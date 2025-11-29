@class AWEAwemeModel;

@interface AWEMediaDownloadWaterMarkConfig : NSObject {
    AWEAwemeModel *model;
}

@property (nonatomic) unsigned long long watermarkTaskType;

+ (id)configWithAwemeModel:(id)a0 downloadType:(unsigned long long)a1;
+ (id)watermarkConfigMap;

- (id)edgeDataWithFileURL:(id)a0;
- (BOOL)canDirectAddVideoheaderWithFileURL:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
