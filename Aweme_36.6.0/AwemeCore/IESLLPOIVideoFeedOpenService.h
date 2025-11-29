@class IESLLPOIDetailNGPageContext;
@protocol IESLLPOISyncFeedExtensionProtocol;

@interface IESLLPOIVideoFeedOpenService : NSObject

@property (readonly, nonatomic) id<IESLLPOISyncFeedExtensionProtocol> syncFeedManager;
@property (retain, nonatomic) IESLLPOIDetailNGPageContext *pageContext;

- (id)fullPageFeedExtension;
- (void)openVideoFeedWithActionContext:(id)a0 pageContext:(id)a1 constData:(id)a2;
- (void).cxx_destruct;

@end
