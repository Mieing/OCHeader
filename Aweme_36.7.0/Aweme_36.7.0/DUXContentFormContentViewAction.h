@class NSString, UIView;

@interface DUXContentFormContentViewAction : NSObject <DUXContentFormContent>

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithContent:(id)a0;

- (id)duxContentForm_view;
- (void).cxx_destruct;

@end
