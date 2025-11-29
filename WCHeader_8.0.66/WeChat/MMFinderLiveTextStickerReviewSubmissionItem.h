@class NSString;

@interface MMFinderLiveTextStickerReviewSubmissionItem : NSObject <MMFinderLiveStickerReviewSubmissionItem>

@property (retain, nonatomic) NSString *submissionId;
@property (readonly, nonatomic) BOOL readyForSubmission;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
