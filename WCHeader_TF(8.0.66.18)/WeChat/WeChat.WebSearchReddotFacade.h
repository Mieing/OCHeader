@class _TtC6WeChat8WSReddot;

@interface WeChat.WebSearchReddotFacade : NSObject

@property (class, nonatomic, readonly) BOOL enabled;
@property (class, nonatomic, readonly) _TtC6WeChat8WSReddot *entranceReddot;
@property (class, nonatomic, readonly) _TtC6WeChat8WSReddot *mentionReddot;

+ (void)clear;

- (id)init;

@end
