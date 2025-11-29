@class NSArray, NSString;

@interface IESECDLView : UIView <IESECDLComponentProtocol, IESECDLEventProtocol>

@property (copy, nonatomic) NSArray *originConstraints;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ respondEventBlock;
@property (copy, nonatomic) NSArray *eventData;

- (void)clickAction;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
