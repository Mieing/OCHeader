@interface AWERecordBeautyTreeTraversal : NSObject

+ (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
+ (void)preOrderTraversalWithNode:(id)a0 block:(id /* block */)a1;
+ (void)levelOrderTraversalWithNode:(id)a0 block:(id /* block */)a1;
+ (void)postOrderTraversalWithNode:(id)a0 shouldAppendNodeBlock:(id /* block */)a1 block:(id /* block */)a2;

@end
