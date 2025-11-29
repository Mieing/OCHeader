@class NSString, IESLivePaidStreamPaidPanelManager;

@interface IESLivePaidStreamServiceImpl : NSObject <IESLivePaidStreamService>

@property (retain, nonatomic) IESLivePaidStreamPaidPanelManager *paidPanelManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
