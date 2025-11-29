@class NSString, BizPersonalCenterCellList_WeappInfo;

@interface BizPersonalCenterCellList_CellInfo : WXPBGeneratedMessage

@property (nonatomic) int cellType;
@property (nonatomic) int cellName;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *cellContent;
@property (nonatomic) BOOL h5TypeShowMenu;
@property (retain, nonatomic) BizPersonalCenterCellList_WeappInfo *weappInfo;

+ (void)initialize;

- (void)setWeappInfo:(id)a0;
- (id)weappInfo;
- (void)setH5TypeShowMenu:(BOOL)a0;
- (BOOL)h5TypeShowMenu;
- (void)setCellContent:(id)a0;
- (id)cellContent;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppid:(id)a0;
- (id)appid;
- (void)setH5Url:(id)a0;
- (id)h5Url;
- (void)setCellName:(int)a0;
- (int)cellName;
- (void)setCellType:(int)a0;
- (int)cellType;

@end
