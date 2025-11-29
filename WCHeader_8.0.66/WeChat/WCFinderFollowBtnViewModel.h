@class NSString, WCFinderContact;

@interface WCFinderFollowBtnViewModel : NSObject <WCFinderContactExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long followState;
@property (nonatomic) BOOL isPrivate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithContact:(id)a0;
- (BOOL)isSelfContact;
- (unsigned long long)nextFollowAction;
- (void)dealloc;
- (void)postChangeFollowStateRequest;
- (void)onFinderContactFollowStatusUpdate:(id)a0;
- (void).cxx_destruct;

@end
