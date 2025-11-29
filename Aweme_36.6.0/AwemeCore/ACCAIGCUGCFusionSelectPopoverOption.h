@class NSString;
@protocol ACCAIGCUGCFusionSelectPopoverOptionSelectDelegate;

@interface ACCAIGCUGCFusionSelectPopoverOption : NSObject

@property (weak, nonatomic) id<ACCAIGCUGCFusionSelectPopoverOptionSelectDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long disableType;
@property (copy, nonatomic) id /* block */ select;

+ (id)optionWithTitle:(id)a0 selectBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
