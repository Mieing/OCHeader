@class NSDictionary;

@interface ICHShield : NSObject {
    NSDictionary *_mapper;
}

@property (class, readonly) ICHShield *shared;

- (void)installAbility:(int)a0 withConfig:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
