@interface WCFinderProfilePageEvent : NSObject

@property (copy, nonatomic) id /* block */ asyncAdapter;
@property (copy, nonatomic) id /* block */ waitContactAdapter;
@property (copy, nonatomic) id /* block */ depPageAdapter;
@property (nonatomic) BOOL waitContact;
@property (retain, nonatomic) Class depPage;

+ (id)asyncFetchPage:(id /* block */)a0;
+ (id)ensureContact:(id /* block */)a0;
+ (id)depPage:(Class)a0 adapter:(id /* block */)a1;

- (id)onFilledContact:(id)a0;
- (void).cxx_destruct;

@end
