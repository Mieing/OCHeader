@class FinderObjectExtIconInfo, FinderObjectExtGeneralWording, PostActionSheetList, NSMutableArray;

@interface FinderObjectExtInfoList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *objectExtInfoList;
@property (retain, nonatomic) FinderObjectExtGeneralWording *wording;
@property (retain, nonatomic) FinderObjectExtIconInfo *dark;
@property (retain, nonatomic) FinderObjectExtIconInfo *light;
@property (retain, nonatomic) PostActionSheetList *appList;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) NSMutableArray *words;
@property (retain, nonatomic) NSMutableArray *pags;

+ (void)initialize;

- (void)setPags:(id)a0;
- (id)pags;
- (void)setWords:(id)a0;
- (id)words;
- (void)setImages:(id)a0;
- (id)images;
- (void)setAppList:(id)a0;
- (id)appList;
- (void)setLight:(id)a0;
- (id)light;
- (void)setDark:(id)a0;
- (id)dark;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setObjectExtInfoList:(id)a0;
- (id)objectExtInfoList;

@end
