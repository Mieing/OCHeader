@class AWEVideoHallBlockInfo, NSString, AWELVideoEpisodeInfoModel, UIColor, NSDictionary, AWEVideoHallActionInfo, AWELVideoAlbumInfoModel;

@interface AWEVideoHallHotCellModel : NSObject

@property (retain, nonatomic) AWELVideoAlbumInfoModel *album;
@property (retain, nonatomic) AWEVideoHallActionInfo *action;
@property (retain, nonatomic) AWEVideoHallBlockInfo *blockInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isAppBrandLvideo;
@property (readonly, nonatomic) AWELVideoEpisodeInfoModel *episode;
@property (readonly, copy, nonatomic) NSString *tagString;
@property (readonly, nonatomic) UIColor *tagBackgroundColor;
@property (readonly, nonatomic) UIColor *tagFontColor;
@property (readonly, nonatomic) BOOL showTag;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL showScore;
@property (readonly, copy, nonatomic) NSString *updateCycleString;
@property (nonatomic) BOOL isVideoHall;

- (id)initWithItem:(id)a0 episode:(id)a1 action:(id)a2 title:(id)a3 subTitle:(id)a4 blockInfo:(id)a5;
- (id)actualCover;
- (void).cxx_destruct;

@end
