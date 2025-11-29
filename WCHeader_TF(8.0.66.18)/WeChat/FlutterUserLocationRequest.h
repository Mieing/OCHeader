@interface FlutterUserLocationRequest : NSObject

@property (nonatomic) long long reqAuthScene;
@property (nonatomic) unsigned long long reqGeoMode;
@property (copy, nonatomic) id /* block */ reqCompletion;

- (id)initWithAuthScene:(long long)a0 reqGeoMode:(unsigned long long)a1 reqCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
