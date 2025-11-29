@class LctOperationFirstEntryInfo, NSMutableArray, NewDocumentItem;

@interface LctOperationShowInfoWithProduct : WXPBGeneratedMessage

@property (retain, nonatomic) NewDocumentItem *titleItem;
@property (retain, nonatomic) NSMutableArray *productList;
@property (retain, nonatomic) LctOperationFirstEntryInfo *firstEntryInfo;

+ (void)initialize;

@end
