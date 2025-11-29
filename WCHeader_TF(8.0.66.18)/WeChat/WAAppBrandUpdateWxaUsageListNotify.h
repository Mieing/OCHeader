@class NSMutableArray;

@interface WAAppBrandUpdateWxaUsageListNotify : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int deleteCount;
@property (retain, nonatomic) NSMutableArray *deleteAppInfos;

- (void).cxx_destruct;

@end
