@class StoreEmoticonDesignerProfileJumpConfig;

@interface StoreEmoticonDesignerProfileJumpLogic : NSObject

@property (retain, nonatomic) StoreEmoticonDesignerProfileJumpConfig *config;

- (id)initWithConfig:(id)a0;
- (void)asyncShowWith:(id)a0;
- (void)internalOpenVC:(id)a0;
- (void)openDesignerVC:(id)a0;
- (void)openFinderVC:(id)a0;
- (void)showFailTips;
- (void).cxx_destruct;

@end
