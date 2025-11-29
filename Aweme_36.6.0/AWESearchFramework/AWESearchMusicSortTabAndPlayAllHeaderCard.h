@class AWESearchMusicSortTabViewCell, NSString, AWESearchCachalotResultContext, AWESearchMusicHeaderInfoModel, AWESearchMusicPlayAllViewCell;

@interface AWESearchMusicSortTabAndPlayAllHeaderCard : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchMusicSortTabViewCell *sortTabCell;
@property (retain, nonatomic) AWESearchMusicPlayAllViewCell *playAllCell;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWESearchMusicHeaderInfoModel *bindModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)contentInfoView;
- (void)p_addContentCell;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
