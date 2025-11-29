@class NSMutableArray, UserPlateItem;

@interface UserPlateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *plateItemList;
@property (retain, nonatomic) UserPlateItem *defaultPlateItem;

+ (void)initialize;

@end
