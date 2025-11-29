@class NSString;

@interface AWESearchVisionPauseVideoTagMonitor : NSObject <AWESearchVisionPauseVideoTagMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackVideoPauseTagData:(id)a0 awemeID:(id)a1 params:(id)a2;
+ (void)trackVideoPauseTagShowSuccess:(id)a0 params:(id)a1;


@end
