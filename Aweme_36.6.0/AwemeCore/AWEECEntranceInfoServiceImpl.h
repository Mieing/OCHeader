@class NSString;

@interface AWEECEntranceInfoServiceImpl : NSObject <AWEECEntranceInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)composeFactory:(id)a0;
+ (id)entranceInfoWhiteList;
+ (id)composeEntranceInfo:(id)a0 scene:(id)a1;
+ (id)composeEntranceInfo:(id)a0 scene:(id)a1 originalDict:(id)a2;


@end
