@class NSString;
@protocol AWECommerceComponentContext;

@interface AWEAdCommentHighlightManager : NSObject <AWECommerceComponentProtocol>

@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;

- (void).cxx_destruct;
- (void)willDisplay;

@end
