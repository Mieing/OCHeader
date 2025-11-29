@class NSMutableArray, BatchSearchHardDeviceFilter;

@interface BatchSearchHardDeviceReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *searchInfo;
@property (retain, nonatomic) BatchSearchHardDeviceFilter *searchFilter;
@property (nonatomic) unsigned int batchSearchSence;

+ (void)initialize;

@end
