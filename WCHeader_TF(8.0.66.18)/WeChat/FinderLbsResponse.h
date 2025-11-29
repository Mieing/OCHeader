@class NSString, NSMutableArray, FinderLbsDivider;

@interface FinderLbsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *distance;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSMutableArray *lbsTag;
@property (nonatomic) unsigned int poiBusinuessType;
@property (retain, nonatomic) FinderLbsDivider *divider;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;

+ (void)initialize;

@end
