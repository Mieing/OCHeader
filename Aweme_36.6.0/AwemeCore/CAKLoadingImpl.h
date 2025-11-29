@class NSString;

@interface CAKLoadingImpl : NSObject <CAKLoadingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showLoadingWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3 afterDelay:(double)a4;
+ (id)showLoadingWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3;


@end
