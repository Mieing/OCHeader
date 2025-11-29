@interface AWEDeviceModelInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long generation;
@property (nonatomic) long long serial;
@property (nonatomic) BOOL isAChip;
@property (nonatomic) long long chipGeneration;
@property (nonatomic) BOOL graphicsPowerChip;

@end
