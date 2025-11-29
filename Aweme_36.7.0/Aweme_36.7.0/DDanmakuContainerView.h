@class NSString, NSMutableArray;
@protocol DDanmakuContainerViewDelegate;

@interface DDanmakuContainerView : UIView <DDanmakuContainerViewProtocol>

@property (retain, nonatomic) NSMutableArray *danmakuDescriptors;
@property (weak, nonatomic) id<DDanmakuContainerViewDelegate> containerViewDelegate;
@property (copy, nonatomic) id /* block */ hitTestBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
