@class NSString, MMImagePickerManagerOptionObj;

@interface WCFinderCameraViewModel : NSObject

@property (retain, nonatomic) MMImagePickerManagerOptionObj *optionObj;
@property (retain, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *templateFollowFeedId;
@property (copy, nonatomic) NSString *musicSongId;

- (id)initWithFinderUsername:(id)a0;
- (id)init;
- (id)createFinderCameraOptionBy:(id)a0;
- (id)createFinderLiveCameraCoverOption;
- (id)createFinderPickerOption;
- (id)createSightDraftWithVideoPath:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2;
- (id)dataItemForSight:(id)a0;
- (id)dataItemWithImagePathArray:(id)a0;
- (void).cxx_destruct;

@end
