@class NSString, MMUILabel;

@interface MMFinderLiveKTVBeginContentView : MMFinderLiveKTVBaseView

@property (nonatomic) unsigned long long contentMode;
@property (retain, nonatomic) MMUILabel *songNameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) NSString *currUniqueId;
@property (copy, nonatomic) id /* block */ requestSingerHeaderUIDescCallback;

- (id)initWithTaskId:(id)a0 mode:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSongNameLabel;
- (void)updateSongNameLabelOrigin;
- (void)layoutDescLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSingerHeaderRect;
- (BOOL)updateCurrUnique;
- (void)refreshSongNameLabel;
- (void)begin;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)advanceDisplay;
- (void)onCurrSongNameUpdated;
- (void)clearStates;
- (void).cxx_destruct;

@end
