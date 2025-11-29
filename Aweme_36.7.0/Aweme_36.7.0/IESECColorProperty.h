@class NSString;

@interface IESECColorProperty : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id /* block */ setter;

- (id)initWithName:(id)a0 setter:(id /* block */)a1;
- (void).cxx_destruct;

@end
