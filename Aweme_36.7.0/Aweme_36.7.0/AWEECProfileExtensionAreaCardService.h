@class NSString;

@interface AWEECProfileExtensionAreaCardService : HTSService <AWEECProfileExtensionAreaCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storeSourceParamsWithExtraInfoDic:(id)a0;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
- (Class)newProfileExtensionAreaCardControllerClass;
- (Class)newProfileExtensionAreaMyOrderListCardControllerClass;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 cardModel:(id)a3 extraInfo:(id)a4 cardIndex:(unsigned long long)a5 isDotViewShow:(BOOL)a6 cardData:(id)a7 shouldTrackAppearEvent:(BOOL)a8;
- (id)commonTrackParamsByExtraInfoDic:(id)a0 userModel:(id)a1 cardData:(id)a2 cardModel:(id)a3 cardIndex:(unsigned long long)a4 isDotViewShow:(BOOL)a5 userIsMaster:(BOOL)a6;

@end
