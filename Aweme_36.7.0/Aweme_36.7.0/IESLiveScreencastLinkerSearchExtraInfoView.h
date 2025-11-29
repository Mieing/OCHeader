@class NSString;

@interface IESLiveScreencastLinkerSearchExtraInfoView : UIView

@property (copy, nonatomic) NSString *suffixStr;

- (long long)p_linkUserNicknameAverageWordLenLimit:(long long)a0;
- (id)p_linkUserAttributedStrWithNicknameArray:(id)a0 averageWordLenLimit:(long long)a1;
- (void)updateLinkedUsers:(id)a0;
- (void).cxx_destruct;

@end
