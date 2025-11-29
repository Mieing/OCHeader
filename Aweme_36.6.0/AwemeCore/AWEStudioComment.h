@class NSNumber, NSString, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface AWEStudioComment : NSObject <AWEStudioComment>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NSNumber *localDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaAssetWithPublishModel:(id)a0;
+ (id)mediaAssetWithPublishModel:(id)a0 localDuration:(id)a1;

- (BOOL)isFastImport;
- (id)timeFormatted:(id)a0;
- (void)updateCommentInfo:(id)a0;
- (void)appendToPublishQueue;
- (void).cxx_destruct;
- (BOOL)isImage;
- (id)duration;
- (id)thumb;

@end
