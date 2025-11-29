@class NSString;

@interface ACCTrackDynamicParamsFollowShootBiz : NSObject <ACCTrackDynamicParamsBizProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicParamsWithDataContext:(id)a0;
+ (id)dynamicParamsWithDataContext:(id)a0 event:(id)a1 inputParams:(id)a2;
+ (id)events;


@end
