@class NSArray, WCFinderFeedDraft, NSString;
@protocol WCFinderDraftUploadProgressDelegate;

@interface WCFinderDraftUploadProgress : NSObject <WCFinderDraftUploadProgress>

@property (retain, nonatomic) NSArray *combinedProgresses;
@property (readonly, nonatomic) double value;
@property (weak, nonatomic) WCFinderFeedDraft *draft;
@property (weak, nonatomic) id<WCFinderDraftUploadProgressDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressWithCombineProgresses:(id)a0;

- (void)flushProgressValue;
- (void).cxx_destruct;

@end
