@class NSString, NSMutableArray, FinderJumpInfo;

@interface AnchorCloseLivePageDataUnit : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *headWording;
@property (retain, nonatomic) NSMutableArray *dataItemList;
@property (retain, nonatomic) FinderJumpInfo *detailDataJumpInfo;

+ (void)initialize;

@end
