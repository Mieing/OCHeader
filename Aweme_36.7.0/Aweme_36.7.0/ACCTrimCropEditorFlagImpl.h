@class NSString;
@protocol ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider;

@interface ACCTrimCropEditorFlagImpl : NSObject <ACCTrimCropSequencePieceServiceListener, ACCTrimCropEditorFlagProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEdited) BOOL edited;
@property (nonatomic) BOOL hasTrimed;
@property (nonatomic) BOOL hasCropped;
@property (nonatomic) BOOL hasRotated;
@property (nonatomic) BOOL hasFlipped;
@property (nonatomic) BOOL trimSignalForUpdate;
@property (nonatomic) BOOL hasUserChangeImageRange;
@property (nonatomic) BOOL hasUserChangeImageRatio;
@property (nonatomic) long long changeCount;

@end
