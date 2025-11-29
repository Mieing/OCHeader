@class NSString;

@interface WCAppAuthTableViewCellData : NSObject

@property (nonatomic) unsigned long long rowIndex;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appTypeDesc;
@property (copy, nonatomic) NSString *appScope;
@property (nonatomic) BOOL isBottomCell;

- (void).cxx_destruct;

@end
