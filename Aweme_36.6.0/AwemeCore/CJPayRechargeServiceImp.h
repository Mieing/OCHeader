@class NSString;
@protocol CJPayAPIDelegate;

@interface CJPayRechargeServiceImp : NSObject <CJPayRechargeService>

@property (retain, nonatomic) id<CJPayAPIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

@end
