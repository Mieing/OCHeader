@class NSString;
@protocol TingPlayAppMinimizeDelegate;

@interface DefaultPlayAppConfig : NSObject <TingPlayAppConfig>

@property (weak, nonatomic) id<TingPlayAppMinimizeDelegate> minimizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
