@class NSString;

@interface DUXDynamicIconColorProvider : NSObject <DUXIconColorProtocol>

@property (copy, nonatomic) id /* block */ provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicIconColorWithBlock:(id /* block */)a0;

- (id)dux_colorWithTheme:(long long)a0;
- (id)dux_color;
- (void).cxx_destruct;

@end
