@class NSString;
@protocol WCFinderDraftUploadProgress;

@interface WCFinderDraftBackgroundVideoCompressProgress : NSObject <WCFinderDataItemExt, WCFinderDraftUploadProgress>

@property (nonatomic) double value;
@property (weak, nonatomic) id<WCFinderDraftUploadProgress> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressWithTid:(id)a0;

- (void)onFinderDataItemEncodingProgress:(double)a0;
- (void).cxx_destruct;

@end
