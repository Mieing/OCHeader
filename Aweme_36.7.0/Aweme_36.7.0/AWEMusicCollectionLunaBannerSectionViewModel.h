@class AWEMusicLunaGuideBarView, NSDictionary, NSString;

@interface AWEMusicCollectionLunaBannerSectionViewModel : NSObject <AWEMusicCollectionSectionViewModelProtocol>

@property (retain, nonatomic) AWEMusicLunaGuideBarView *lunaBannerView;
@property (nonatomic) unsigned long long bannerStyle;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) id /* block */ bannerDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellViewModelArray;
- (id)sectionFooterView;
- (id)initWithStyle:(unsigned long long)a0 params:(id)a1;
- (void)updateContentWithTitle:(id)a0 subTitle:(id)a1 mainButtonTitle:(id)a2;
- (void)updateContentWithSongsCount:(long long)a0 isCurrentUser:(BOOL)a1;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (double)sectionFooterHeight;
- (id)init;
- (double)sectionHeaderHeight;
- (id)sectionHeaderView;

@end
