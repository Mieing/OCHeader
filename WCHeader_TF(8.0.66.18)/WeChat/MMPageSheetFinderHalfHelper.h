@class NSString;

@interface MMPageSheetFinderHalfHelper : NSObject <WCFinderHalfScreenProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorAnimationProgressFromVC:(id)a0 toHalfContainer:(id)a1;


@end
