@class NSString;

@interface IESLiveMultiLinkerExtraInfoView : UIView

@property (copy, nonatomic) NSString *suffixStr;

- (void)updateLinkedUsers:(id)a0 hiddenAvatarView:(BOOL)a1;
- (long long)p_linkUserNicknameAvarageWordLenLimit:(long long)a0;
- (id)p_linkUserAttributedStrWithNicknameArray:(id)a0 avarageWordLenLimit:(long long)a1 hiddenAvatarView:(BOOL)a2;
- (void).cxx_destruct;

@end
