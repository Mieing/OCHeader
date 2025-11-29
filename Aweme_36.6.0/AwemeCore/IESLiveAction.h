@class NSString;

@interface IESLiveAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) SEL selector;
@property (nonatomic, getter=isDestructive) BOOL destructive;

+ (id)actionWithTitle:(id)a0 selector:(SEL)a1;

- (void).cxx_destruct;

@end
