@class NSString;
@protocol IESECMallChannelConfigProtocol;

@interface AWEECBottomMallConfig : NSObject

@property (nonatomic) BOOL isSafeMode;
@property (nonatomic) BOOL isTabMall;
@property (nonatomic) BOOL isDefaultLanding;
@property (copy, nonatomic) NSString *mallEnvID;
@property (retain, nonatomic) id<IESECMallChannelConfigProtocol> channelConfig;

- (void).cxx_destruct;

@end
