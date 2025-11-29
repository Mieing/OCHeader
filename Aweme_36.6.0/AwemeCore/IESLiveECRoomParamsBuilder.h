@class NSString;

@interface IESLiveECRoomParamsBuilder : NSObject <IESLiveECommerceConvertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpSchemaFromEComLiveParams:(id)a0;
+ (BOOL)shouldAutoOpenList:(id)a0;
+ (BOOL)shouldAutoOpenOrder:(id)a0;
+ (BOOL)shouldAutoOpenDetail:(id)a0;
+ (BOOL)shouldAutoOpenECView:(id)a0;
+ (BOOL)shouldDelayCompForECAutoOpenView:(id)a0;
+ (id)shared;

- (BOOL)shouldAudoOpenECGoodsListView:(id)a0;

@end
