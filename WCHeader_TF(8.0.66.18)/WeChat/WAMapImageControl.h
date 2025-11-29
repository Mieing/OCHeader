@class NSString;

@interface WAMapImageControl : UIImageView <WAMapControlInterface>

@property (retain, nonatomic) NSString *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUserData;
- (void).cxx_destruct;

@end
