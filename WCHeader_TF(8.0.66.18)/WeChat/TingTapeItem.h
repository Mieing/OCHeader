@class TingCategoryItem, NSMutableArray, TingItem;

@interface TingTapeItem : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) TingCategoryItem *categoryItem;
@property (retain, nonatomic) NSMutableArray *localList;
@property (retain, nonatomic) NSMutableArray *listenIdList;
@property (nonatomic) int opType;

+ (id)tapeItemFromCategoryItem:(id)a0;
+ (id)tapeItemFromListenItem:(id)a0;
+ (void)initialize;

- (void)setOpType:(int)a0;
- (int)opType;
- (void)setListenIdList:(id)a0;
- (id)listenIdList;
- (void)setLocalList:(id)a0;
- (id)localList;
- (void)setCategoryItem:(id)a0;
- (id)categoryItem;
- (void)setTingItem:(id)a0;
- (id)tingItem;
- (void)setType:(int)a0;
- (int)type;
- (id)localUUID;
- (id)serverUUID;
- (id)tapeId;
- (id)tapeClientId;
- (id)tapeCoverUrl;
- (id)tapeAuthorIcon;
- (id)tapeAuthor;
- (id)tapeTitle;

@end
