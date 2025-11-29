@class NSMutableSet;

@interface WCSnsPrivacyReporter : NSObject {
    NSMutableSet *_cachedMemeberSet;
    NSMutableSet *_initialMemberSet;
    NSMutableSet *_importFromGroupSet;
    NSMutableSet *_importFromSelectSet;
    NSMutableSet *_removedMemberSet;
    unsigned int _startTime;
    unsigned int _stayTimeInSec;
}

@property (nonatomic) BOOL bOutsider;

- (id)init;
- (void)dealloc;
- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (void)beginSetting;
- (void)setInitailMembers:(id)a0;
- (void)importFromGroupMembers:(id)a0;
- (void)importFromSelectMembers:(id)a0;
- (void)disselecteMember:(id)a0;
- (id)formatUsrs:(id)a0;
- (void)finishByCancel:(BOOL)a0;
- (void).cxx_destruct;

@end
