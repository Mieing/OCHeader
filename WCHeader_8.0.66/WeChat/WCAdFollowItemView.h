@class NSString, MMUILabel, MMUIButton;
@protocol WCAdFollowItemViewDelegate;

@interface WCAdFollowItemView : MMUIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL isFollowed;
@property (retain, nonatomic) MMUIButton *followButton;
@property (retain, nonatomic) MMUILabel *followTitle;
@property (retain, nonatomic) MMUILabel *followDesc;
@property (retain, nonatomic) MMUILabel *followedTips;
@property (weak, nonatomic) id<WCAdFollowItemViewDelegate> delegate;

- (id)initWithTitle:(id)a0 desc:(id)a1 isFollowed:(BOOL)a2;
- (void)initSubview;
- (void)onCheckBoxClick:(id)a0;
- (BOOL)isUserSelected;
- (void).cxx_destruct;

@end
