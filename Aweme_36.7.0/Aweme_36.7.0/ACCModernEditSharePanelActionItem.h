@class NSString;

@interface ACCModernEditSharePanelActionItem : NSObject

@property (readonly, nonatomic) BOOL vertical;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) id /* block */ action;

- (id)initWithVertical:(BOOL)a0 icon:(id)a1 title:(id)a2 action:(id /* block */)a3;
- (void).cxx_destruct;

@end
