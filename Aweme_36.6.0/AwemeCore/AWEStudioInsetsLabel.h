@class AWEInsetsLabel, NSString;

@interface AWEStudioInsetsLabel : NSObject <ACCInsetsLabelProtocol>

@property (retain, nonatomic) AWEInsetsLabel *label;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)targetLabel;
- (void).cxx_destruct;

@end
