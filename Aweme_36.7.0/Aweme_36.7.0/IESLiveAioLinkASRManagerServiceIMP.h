@class NSString;
@protocol IESLiveAioLinkASRManagerServiceAdapter;

@interface IESLiveAioLinkASRManagerServiceIMP : IESLiveGeneralBaseService <IESLiveAioLinkASRManagerService>

@property (retain, nonatomic) id<IESLiveAioLinkASRManagerServiceAdapter> giftASRServiceAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)stopASREngine;
- (id)startASREngine:(id)a0;
- (void)updateASRHotWords:(id)a0;
- (void).cxx_destruct;

@end
