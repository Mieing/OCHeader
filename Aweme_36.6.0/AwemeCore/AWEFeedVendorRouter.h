@class NSString;

@interface AWEFeedVendorRouter : NSObject <AWEFeedVendorRouterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transToXiguaPersonalPageWithParams:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
+ (void)transToXiguaPersonalPageWithParams:(id)a0 awemeModel:(id)a1 scene:(id)a2 launchFrom:(id)a3 location:(id)a4 enterFrom:(id)a5 enterMethod:(id)a6;
+ (void)trackEnterPersonalDetailWithModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;


@end
