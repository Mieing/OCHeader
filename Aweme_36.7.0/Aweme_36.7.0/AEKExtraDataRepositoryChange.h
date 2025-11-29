@class AEKExtraAETrackModel, AEKExtraAutoCaptionTrackModel, NSString;

@interface AEKExtraDataRepositoryChange : NSObject <AEKExtraDataRepositoryChange>

@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) AEKExtraAETrackModel *aeTrackModel;
@property (retain, nonatomic) AEKExtraAutoCaptionTrackModel *captionTracks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
