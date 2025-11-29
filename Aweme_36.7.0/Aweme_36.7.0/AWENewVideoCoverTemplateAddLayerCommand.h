@class NLELayer_OC;

@interface AWENewVideoCoverTemplateAddLayerCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NLELayer_OC *addLayer;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
