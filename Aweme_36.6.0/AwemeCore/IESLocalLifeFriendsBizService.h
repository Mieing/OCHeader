@class NSString;

@interface IESLocalLifeFriendsBizService : HTSService <IESLocalLifeFriendsBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storyProgressViewWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
+ (void)updateStoryProgressView:(id)a0 totalCount:(long long)a1 duration:(double)a2 currentIndex:(long long)a3 currentProcess:(double)a4 needAnimation:(BOOL)a5;


@end
