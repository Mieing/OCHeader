@class NSString;

@interface IESLocalLifeCommerceBizService : HTSService <IESLocalLifeCommerceBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLiveFloatOnTopManagerPlayOnViewController:(id)a0 fromViewController:(id)a1 logExtra:(id)a2;
+ (void)trackWithAdContext:(id)a0;
+ (void)trackWithContext:(id /* block */)a0;
+ (id)convertTrackContext:(id)a0;


@end
