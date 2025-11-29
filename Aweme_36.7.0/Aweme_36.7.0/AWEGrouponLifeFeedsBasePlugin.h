@class AWEGrouponLifeFeedsPageContext, NSString;

@interface AWEGrouponLifeFeedsBasePlugin : NSObject <AWEGrouponLifeFeedsPluginProtocol>

@property (weak, nonatomic) AWEGrouponLifeFeedsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void).cxx_destruct;

@end
