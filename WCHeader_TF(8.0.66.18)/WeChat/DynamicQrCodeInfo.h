@class NSString;

@interface DynamicQrCodeInfo : MMObject

@property (nonatomic) BOOL isDynamic;
@property (nonatomic) BOOL canRefresh;
@property (retain, nonatomic) NSString *refreshWording;

- (void).cxx_destruct;

@end
