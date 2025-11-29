@class NSString;

@interface AWEStudioFlyBirdSelectionModel : NSObject <AWEStudioFlyBirdSelectionModel>

@property (nonatomic) long long albumMaxSelctionCount;
@property (nonatomic) long long albumMaxSelctionVideoDuration;
@property (nonatomic) BOOL needBase64Info;
@property (nonatomic) BOOL recordSaveToAlbum;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (nonatomic) BOOL onlyAllowPhoto;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL defaultCameraPositionBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
