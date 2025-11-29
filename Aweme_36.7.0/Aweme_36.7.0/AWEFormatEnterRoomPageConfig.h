@class NSString;

@interface AWEFormatEnterRoomPageConfig : NSObject

@property (nonatomic) BOOL needFloatMode;
@property (copy, nonatomic) NSString *pageHeightBias;
@property (nonatomic) BOOL disableSwitchFullscreen;
@property (copy, nonatomic) NSString *anchorMessageId;
@property (nonatomic) BOOL disableVoiceBroadcast;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
