@class BDXBridgeContext, NSString, NSArray;

@interface AWEBDARifleViewConfiguration : BDARifleViewConfiguration <AWEBDARifleViewConfiguration> {
    NSArray *_customInstanceMethods;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) BDXBridgeContext *bridgeContext;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCustomInstanceMethods:(id)a0;
- (id)customInstanceMethods;
- (void).cxx_destruct;
- (id)init;

@end
