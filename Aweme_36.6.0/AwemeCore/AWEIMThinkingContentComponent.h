@class NSDictionary, NSString;
@protocol AWEIMNativeDynamicContentInterface;

@interface AWEIMThinkingContentComponent : AWEIMFlexComponent <AWEIMInnerMessageContentComponentProtocol>

@property (weak, nonatomic) id<AWEIMNativeDynamicContentInterface> contentService;
@property (retain, nonatomic) NSDictionary *contentDict;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (BOOL)enableDisplay;
- (void)didUpdateContent;
- (BOOL)shouldSelfLayout;
- (void)p_updateProps;
- (unsigned long long)p_thinkingStatusWithStreamStatus:(unsigned long long)a0;
- (id)p_titleWithStatus:(unsigned long long)a0;
- (void)p_didTapTitle;
- (void).cxx_destruct;

@end
