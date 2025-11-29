@class NSString;

@interface AWECorpSearchNewStyleViewCell : AWECorpTaskViewCell <AWECompanyChallengeCellProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)textWidthWithProductInfo:(id)a0;
+ (id)identifier;

- (void)makeConstraints;
- (void)updateWithTheme:(id)a0;
- (void)configWithNewStyleProductInfo:(id)a0;
- (void)updateNewStyleConstraints;
- (void)updateLayout;

@end
