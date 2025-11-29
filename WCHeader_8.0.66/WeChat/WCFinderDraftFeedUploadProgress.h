@class NSString;
@protocol WCFinderDraftUploadProgress;

@interface WCFinderDraftFeedUploadProgress : NSObject <WCFinderDraftUploadProgress>

@property (nonatomic) double value;
@property (weak, nonatomic) id<WCFinderDraftUploadProgress> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressWithTid:(id)a0;

- (void)onFinderDataItemPostProgressWithTid:(id)a0 progress:(id)a1;
- (void).cxx_destruct;

@end
