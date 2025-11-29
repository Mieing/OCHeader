@class NSString;

@interface AWEDetailUnifyVerifiedUserFullConfigurationImpl : NSObject <AWEDetailVerifiedUserConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureView:(id)a0 withModel:(id)a1;
- (void)updateFollowButtonToFollowedStatusWithView:(id)a0;
- (void)updateFollowButtonToUnFollowedStatusWithView:(id)a0;
- (void)p_configureUIForCell:(id)a0 withModel:(id)a1;
- (void)p_configureLayoutForCell:(id)a0 withModel:(id)a1;
- (void)configUnifyActivityViewForCell:(id)a0 withModel:(id)a1;
- (double)cellHeight;

@end
