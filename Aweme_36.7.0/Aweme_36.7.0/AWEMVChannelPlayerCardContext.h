@class NSDictionary, AWEMVChannelPageContext;

@interface AWEMVChannelPlayerCardContext : AWEPageContext

@property (weak, nonatomic) AWEMVChannelPageContext *pageContext;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (nonatomic) BOOL hasTitle;

- (void).cxx_destruct;

@end
