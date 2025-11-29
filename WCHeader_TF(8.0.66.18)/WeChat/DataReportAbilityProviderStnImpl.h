@class NSString;
@protocol AmoebaStnDelegate;

@interface DataReportAbilityProviderStnImpl : NSObject <AmoebaAbilityProviderStn, PBMessageObserverDelegate>

@property (retain, nonatomic) id<AmoebaStnDelegate> stnDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
