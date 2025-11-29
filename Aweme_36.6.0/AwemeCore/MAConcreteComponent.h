@class NSString;

@interface MAConcreteComponent : NSObject <AMapComponent>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *product;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
