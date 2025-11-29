@class NSString;

@interface UnwrappedURS : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *param1;
@property (copy, nonatomic) NSString *param2;

+ (id)resourceWith:(long long)a0 param1:(id)a1 param2:(id)a2;

- (void)effectID:(id /* block */)a0;
- (void)panelIDAndResourceID:(id /* block */)a0;
- (void).cxx_destruct;

@end
