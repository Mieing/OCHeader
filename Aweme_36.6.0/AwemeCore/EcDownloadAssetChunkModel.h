@class NSString, NSError, EcTaskUnit;

@interface EcDownloadAssetChunkModel : NSObject

@property (nonatomic) long long size;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long progress;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) EcTaskUnit *task;

- (void).cxx_destruct;

@end
