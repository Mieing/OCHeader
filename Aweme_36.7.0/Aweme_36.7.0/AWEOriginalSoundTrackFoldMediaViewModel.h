@class AWEMusicFoldMediaModel;

@interface AWEOriginalSoundTrackFoldMediaViewModel : NSObject

@property (retain, nonatomic) AWEMusicFoldMediaModel *foldMediaModel;
@property (nonatomic, getter=isFold) BOOL fold;
@property (nonatomic) long long beginIndex;
@property (nonatomic) long long endIndex;

- (void).cxx_destruct;
- (id)init;

@end
