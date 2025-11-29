@class NSString;
@protocol DVEToastProtocol, DVELoggerProtocol, DVEResourceLoaderProtocol;

@interface CECMomentDVEServiceInject : NSObject <DVEVCContextExternalInjectProtocol>

@property (retain, nonatomic) id<DVEResourceLoaderProtocol> resourceLoader;
@property (retain, nonatomic) id<DVELoggerProtocol> logger;
@property (retain, nonatomic) id<DVEToastProtocol> toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
