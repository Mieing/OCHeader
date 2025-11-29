@class BottomCell, CoverInfo, HalfPage;

@interface QRActionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) HalfPage *halfPageInfo;
@property (retain, nonatomic) CoverInfo *coverInfo;
@property (retain, nonatomic) BottomCell *bottomCellInfo;

+ (void)initialize;

@end
