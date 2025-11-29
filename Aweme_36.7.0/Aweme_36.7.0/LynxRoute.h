@class NSString, NSDictionary;

@interface LynxRoute : NSObject

@property (retain) NSString *templateUrl;
@property (retain) NSString *routeName;
@property (retain) NSDictionary *param;

- (id)initWithUrl:(id)a0 param:(id)a1;
- (id)initWithUrl:(id)a0 routeName:(id)a1 param:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
