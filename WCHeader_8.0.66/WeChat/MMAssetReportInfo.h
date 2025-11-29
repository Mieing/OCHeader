@interface MMAssetReportInfo : MMObject

@property (nonatomic) BOOL isVideo;
@property (nonatomic) unsigned long long fileSize;

- (id)getReportDict;

@end
