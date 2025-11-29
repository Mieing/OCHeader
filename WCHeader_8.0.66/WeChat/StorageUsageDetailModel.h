@class NSString;

@interface StorageUsageDetailModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *usageDescription;
@property (nonatomic) BOOL hasLoadOrigin;

- (void).cxx_destruct;

@end
