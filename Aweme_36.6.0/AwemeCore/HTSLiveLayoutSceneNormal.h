@class NSString, NSMapTable, UIView;

@interface HTSLiveLayoutSceneNormal : NSObject <HTSLiveLayoutSceneProtocol>

@property (weak, nonatomic) NSMapTable *viewTable;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
