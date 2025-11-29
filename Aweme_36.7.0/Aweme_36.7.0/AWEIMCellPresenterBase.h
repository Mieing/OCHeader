@class NSString, AWEIMChatCellComponentBase, UIView;

@interface AWEIMCellPresenterBase : MTLModel <MTLJSONSerializing>

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) AWEIMChatCellComponentBase *currentBelongingComponent;
@property (nonatomic) BOOL displayEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
