@interface HMDGWPAsanOption : NSObject

@property (nonatomic) void /* function */ *replaceZone;
@property (nonatomic) unsigned int maxAllocation;
@property (nonatomic) unsigned int sampleRate;
@property (nonatomic, getter=isDebugMode) BOOL debugMode;
@property (nonatomic) BOOL useNewAsan;
@property (nonatomic) BOOL customEntry;
@property (nonatomic) BOOL keepUseAfter;
@property (nonatomic) BOOL customCallback;

@end
