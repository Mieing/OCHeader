@class FinderMusicTopicInfo, NSString, UIView;
@protocol WCFinderMusicAuthorsActionSheetDelegate;

@interface WCFinderMusicAuthorsActionSheet : WCActionSheet <WCFinderMusicSingleAuthorViewDelegate>

@property (retain, nonatomic) UIView *tipsView;
@property (weak, nonatomic) id<WCFinderMusicAuthorsActionSheetDelegate> authorDelegate;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)didClickClose;
- (void)onClickSingleAuthorAction:(id)a0;
- (void).cxx_destruct;

@end
