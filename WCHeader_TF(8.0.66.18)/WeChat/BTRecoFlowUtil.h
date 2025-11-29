@interface BTRecoFlowUtil : NSObject

+ (id)buildWebImageView;
+ (id)buildXButton;
+ (void)reigisterTableViewCells:(id)a0;
+ (BOOL)isSupportedRecoFlowStyleWithCardMsg:(id)a0;
+ (BOOL)isAllRecoFlowCardsUnsupportedWithCardMsgArr:(id)a0;
+ (id)tableView:(id)a0 cellForIndexPath:(id)a1 sectionData:(id)a2 shouldShowBottomSeperateLine:(BOOL)a3;
+ (id)genOpenParamsWithIndexPath:(id)a0 sectionData:(id)a1;
+ (BOOL)shouldCellShowBottomSeperateLineWithSectionData:(id)a0 andNextSectionData:(id)a1 isLastSectionData:(BOOL)a2;
+ (BOOL)isRecoFlowFuncSectionWithType:(unsigned long long)a0;
+ (BOOL)isItemShowTypeValidValue:(unsigned long long)a0;
+ (id)cellReuseIdentifierForFeedStyleFlag:(int)a0 itemShowType:(unsigned long long)a1 hasDigest:(BOOL)a2;

@end
