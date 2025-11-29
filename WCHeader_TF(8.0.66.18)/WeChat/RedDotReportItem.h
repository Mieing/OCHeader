@class RedDotReportItem_BoxInfo, RedDotReportItem_ItemInfo;

@interface RedDotReportItem : WXPBGeneratedMessage

@property (retain, nonatomic) RedDotReportItem_BoxInfo *boxInfo;
@property (retain, nonatomic) RedDotReportItem_ItemInfo *itemInfo;
@property (nonatomic) unsigned int actType;

+ (void)initialize;

- (void)setActType:(unsigned int)a0;
- (unsigned int)actType;
- (void)setItemInfo:(id)a0;
- (id)itemInfo;
- (void)setBoxInfo:(id)a0;
- (id)boxInfo;

@end
