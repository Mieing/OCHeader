@class UIImage, NSAttributedString, NSArray;

@interface AWEIMReplyShareLiveMediaProps : AWEIMUIViewPresenterProps

@property (nonatomic) BOOL isLiving;
@property (retain, nonatomic) NSAttributedString *nickName;
@property (retain, nonatomic) NSAttributedString *liveStatusString;
@property (retain, nonatomic) UIImage *liveStatusImage;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) NSArray *coverUrlArray;
@property (retain, nonatomic) NSArray *avatarUrlArray;

- (void).cxx_destruct;

@end
