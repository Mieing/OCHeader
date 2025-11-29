@class NSDictionary;

@interface QBBeaconEventManager : NSObject

@property (retain, nonatomic) NSDictionary *detail;
@property (nonatomic) BOOL isEventUploadClose;
@property (nonatomic) BOOL isEventUpOnOff;
@property (nonatomic) BOOL isBizEventUpload;
@property (nonatomic) BOOL isAtsEnable;

+ (id)shareManager;
+ (BOOL)isUploadBySampleEvent:(id)a0;
+ (BOOL)isSample:(id)a0;
+ (void)setEventUploadClose:(BOOL)a0;
+ (BOOL)isEventUploadClose;
+ (void)setEventUpOnOff:(BOOL)a0;
+ (BOOL)isEventUpOnOff;
+ (void)setBizEventUpload:(BOOL)a0;
+ (BOOL)isBizEventUpload;
+ (void)setAtsEnable:(BOOL)a0;
+ (BOOL)isAtsEnable;

- (id)init;
- (void).cxx_destruct;

@end
