@class NSString;

@interface IESLivePublicScreenCollectionServiceImpl : IESLiveGeneralBaseService <IESLiveMultiTabAction, IESLivePublicScreenCollectionViewActions, IESLivePublicScreenCollectionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)selectedToPublicScreenWithInfoModel:(id)a0;
- (void)selectedPublicScreenFromInfoModel:(id)a0 toInfoModel:(id)a1;
- (id)currentSelectedPublicScreenInfoModel;
- (void)multiTabViewDidScrollToTab:(long long)a0;
- (void)multiTabViewDidScrollToTab:(long long)a0 fromTab:(long long)a1;

@end
