@class AWEXPlayRealnameInstance, NSString;

@interface AWEXPlayOpenService : HTSService <AWEXPlayOpenService>

@property (retain, nonatomic) AWEXPlayRealnameInstance *realnameInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestInterconnectionRealnameWithModel:(id)a0 registerTrackerInstance:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
