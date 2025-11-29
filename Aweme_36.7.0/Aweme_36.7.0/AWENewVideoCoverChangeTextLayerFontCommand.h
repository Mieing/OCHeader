@class NLEResource_OC;

@interface AWENewVideoCoverChangeTextLayerFontCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NLEResource_OC *originFontResource;
@property (retain, nonatomic) NLEResource_OC *nowFontResource;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
