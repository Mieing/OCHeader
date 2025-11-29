@class AWELivePreStreamContext, NSString, AWEAwemeModel;

@interface AWELiveBusinessBaseElement : NSObject <AWELiveBaseElementProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithContext:(id)a0;

@end
