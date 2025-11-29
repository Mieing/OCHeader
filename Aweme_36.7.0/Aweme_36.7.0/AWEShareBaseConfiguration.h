@class AWEShareContext, NSString, AWESharePanelCustomConfiguration;
@protocol AWEShareTask;

@interface AWEShareBaseConfiguration : NSObject <AWEShareConfiguration>

@property (retain, nonatomic) AWESharePanelCustomConfiguration *panelCustomConfiguration;
@property (retain, nonatomic) id<AWEShareTask> task;
@property (readonly, nonatomic) AWEShareContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (void).cxx_destruct;

@end
