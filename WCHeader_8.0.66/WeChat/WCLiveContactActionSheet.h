@class MMHeadImageView, MMCPLabel, NSString, WCFinderContact;
@protocol WCLiveContactActionSheetDelegate;

@interface WCLiveContactActionSheet : WCLiveActionSheet <WCActionSheetDelegate>

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *nickNameLabel;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (weak, nonatomic) id<WCLiveContactActionSheetDelegate> liveContactActionSheetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addTransparencyViewWith:(id)a0 targetView:(id)a1;

- (id)getCustomHeadView;
- (void)updateFinderContact:(id)a0;
- (BOOL)isFinderUser;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
