@class IESLiveNewDressContext, IESLiveNewDressMonitor, IESLiveNewDressErrorFactory, NSString;

@interface IESLiveNewDressContainer : NSObject <IESLiveNewDressInternalService>

@property (retain, nonatomic) IESLiveNewDressContext *context;
@property (retain, nonatomic) IESLiveNewDressErrorFactory *errorFactory;
@property (retain, nonatomic) IESLiveNewDressMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDressContext:(id)a0;
- (id)dressContext;
- (id)dressErrorFactory;
- (id)dressMonitor;
- (void).cxx_destruct;
- (id)init;

@end
