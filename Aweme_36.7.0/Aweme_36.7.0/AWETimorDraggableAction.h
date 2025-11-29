@class NSString;

@interface AWETimorDraggableAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 imageName:(id)a1 handler:(id /* block */)a2;

- (id)initWithTitle:(id)a0 imageName:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;

@end
