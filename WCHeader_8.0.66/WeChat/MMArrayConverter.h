@class NSArray;

@interface MMArrayConverter : NSObject

@property (copy, nonatomic) id /* block */ creator;
@property (copy, nonatomic) id /* block */ remover;
@property (copy, nonatomic) NSArray *value;

- (id)initWithCreator:(id /* block */)a0 remover:(id /* block */)a1;
- (id)updateWithData:(id)a0 updater:(id /* block */)a1;
- (void).cxx_destruct;

@end
