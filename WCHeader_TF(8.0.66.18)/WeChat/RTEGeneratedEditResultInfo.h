@class RTEGeneratedSectionChangeInfo, RTEGeneratedContentSectionList, NSMutableArray, RTERange;

@interface RTEGeneratedEditResultInfo : WXPBGeneratedMessage

@property (retain, nonatomic) RTEGeneratedSectionChangeInfo *changeInfo;
@property (retain, nonatomic) RTEGeneratedContentSectionList *sectionList;
@property (retain, nonatomic) NSMutableArray *idList;
@property (retain, nonatomic) NSMutableArray *indexList;
@property (retain, nonatomic) RTERange *selectedRange;

+ (void)initialize;

@end
