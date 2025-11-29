@class AVAssetExportSession;

@interface RawVideoExportSession : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AVAssetExportSession *exportSession;

- (id)initWithExportSession:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;

@end
