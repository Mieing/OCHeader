@class AWEPlaylistMoreActionSheetPresenter, NSString;

@interface AWEMusicPlaylistMoreActionSheetViewController : UIViewController <DUXSheetDelegate>

@property (weak, nonatomic) AWEPlaylistMoreActionSheetPresenter *presenter;
@property (copy, nonatomic) id /* block */ didTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
