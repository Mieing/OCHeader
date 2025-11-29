@class NSDictionary, NSString;

@interface BDSimPlayerOptions : NSObject

@property (copy, nonatomic) NSDictionary *subTitle;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long memoryGearType;
@property (nonatomic) BOOL enableDanmaku;
@property (nonatomic) BOOL isEncrypted;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *playerSubTag;
@property (copy, nonatomic) NSString *playerTag;
@property (nonatomic) BOOL isTestDeviceAfterPause;
@property (copy, nonatomic) id /* block */ isFirstPlayHandler;

- (void).cxx_destruct;

@end
