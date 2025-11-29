@class NSMutableArray;

@interface PaidSeriesVipEntranceConfigV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *unblockAdButtonsArray;
@property (readonly, nonatomic) unsigned long long unblockAdButtonsArray_Count;
@property (retain, nonatomic) NSMutableArray *blockAdButtonsArray;
@property (readonly, nonatomic) unsigned long long blockAdButtonsArray_Count;
@property (retain, nonatomic) NSMutableArray *upperRightButtonsArray;
@property (readonly, nonatomic) unsigned long long upperRightButtonsArray_Count;

+ (id)descriptor;

@end
