@class NSString, NSNumber, AUCDTOBasicEditorMediaType;

@interface AUCDTOBasicEditor : MTLModel

@property (retain, nonatomic) AUCDTOBasicEditorMediaType *mediaType;
@property (copy, nonatomic) NSString *backButtonTitle;
@property (copy, nonatomic) NSString *finishButtonTitle;
@property (nonatomic) BOOL disableBottomControl;
@property (retain, nonatomic) NSNumber *initialIndex;
@property (nonatomic) BOOL disableAddInstance;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) BOOL forceImageMediaAsImage;

- (void).cxx_destruct;
- (id)init;

@end
