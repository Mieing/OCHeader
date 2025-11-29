@class NSString;

@interface AWEIMResourceOfflineService : HTSService <IESIMResourceOfflineServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)imageView:(id)a0 setImageWithName:(id)a1;
- (id)imageWithName:(id)a0 forTheme:(unsigned long long)a1;
- (id)imageWithName:(id)a0;

@end
