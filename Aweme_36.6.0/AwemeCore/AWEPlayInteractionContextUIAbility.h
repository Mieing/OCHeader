@class NSString;

@interface AWEPlayInteractionContextUIAbility : NSObject <AWEPlayInteractionContextUIAbility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAntiAddictedNoticeBarView;
- (id)createFeedVideoButtonWithDefaultButtonWithImageName:(id)a0 label:(id)a1;
- (id)createFeedVideoButtonWithNoTextButtonWithImageName:(id)a0 shouldFit:(BOOL)a1;
- (id)createFeedVideoButtonWithDefaultButtonWithImageName:(id)a0 label:(id)a1 labelFontOfSize:(double)a2;
- (id)createFeedVideoButtonWithLongTextButtonWithImageName:(id)a0 label:(id)a1 labelFontOfSize:(double)a2;

@end
