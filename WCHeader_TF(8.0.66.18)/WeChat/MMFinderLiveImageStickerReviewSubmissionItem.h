@class NSString, UIImage;

@interface MMFinderLiveImageStickerReviewSubmissionItem : NSObject <MMFinderLiveStickerReviewSubmissionItem>

@property (retain, nonatomic) NSString *submissionId;
@property (retain, nonatomic) NSString *imageUri;
@property (readonly, nonatomic) BOOL readyForSubmission;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
