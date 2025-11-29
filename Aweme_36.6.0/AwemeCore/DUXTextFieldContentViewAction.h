@class NSString, UIView;

@interface DUXTextFieldContentViewAction : NSObject <DUXTextFieldContent>

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithContent:(id)a0;

- (id)duxTextField_view;
- (void).cxx_destruct;

@end
