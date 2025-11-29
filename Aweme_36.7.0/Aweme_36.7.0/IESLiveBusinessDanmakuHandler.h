@class NSString;

@interface IESLiveBusinessDanmakuHandler : NSObject <IESLiveBusinessConfigureHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleBusinessConfigure:(id)a0;
- (void)removeBusinessConfigure:(id)a0;

@end
