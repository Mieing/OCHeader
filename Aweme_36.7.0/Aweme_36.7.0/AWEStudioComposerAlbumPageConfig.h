@class NSNumber, UIColor, AWEStudioComposerAlbumPageEditExtension;

@interface AWEStudioComposerAlbumPageConfig : AWEStudioComposerBasePageConfig

@property (retain, nonatomic) NSNumber *selectState;
@property (nonatomic) BOOL forceOnlyShowNextButton;
@property (retain, nonatomic) NSNumber *bottomViewStyle;
@property (retain, nonatomic) UIColor *nextButtonBackgroundColor;
@property (retain, nonatomic) NSNumber *showsSearchBar;
@property (retain, nonatomic) NSNumber *showsLivePhotoTab;
@property (retain, nonatomic) AWEStudioComposerAlbumPageEditExtension *editExtension;
@property (copy, nonatomic) id /* block */ configAlbumInputData;
@property (nonatomic) long long singleVideoNextJump;
@property (retain, nonatomic) NSNumber *enterVideoCropPageCropMinDuration;
@property (retain, nonatomic) NSNumber *enterVideoCropPageCropMaxDuration;

- (void).cxx_destruct;

@end
