@class TPVideoInfo;

@interface TPVideoInfoBuilder : NSObject

@property (retain, nonatomic) TPVideoInfo *model;

- (id)init;
- (long long)width;
- (id)setWidth:(long long)a0;
- (long long)height;
- (id)setHeight:(long long)a0;
- (id)downloadFileID;
- (id)setDownloadFileID:(id)a0;
- (long long)videoCodecId;
- (id)setVideoCodecId:(long long)a0;
- (id)downloadParamDataArray;
- (id)setDownloadParamDataArray:(id)a0;
- (id)build;
- (void).cxx_destruct;

@end
