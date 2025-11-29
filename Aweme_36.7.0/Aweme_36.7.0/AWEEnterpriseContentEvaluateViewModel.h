@class NSString, NSDictionary, NSNumber, NSAttributedString;

@interface AWEEnterpriseContentEvaluateViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel

@property (retain, nonatomic) NSNumber *selectedButtonIndex;
@property (copy, nonatomic) NSString *unsolveText;
@property (copy, nonatomic) NSString *solveText;
@property (nonatomic) long long buttonStatus;
@property (retain, nonatomic) NSDictionary *contentAttributes;
@property (copy, nonatomic) NSString *unsolveApi;
@property (copy, nonatomic) NSString *solveApi;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSAttributedString *attrText;

+ (id)contentAttributes;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)handleUnsolved;
- (void)handleSolved;
- (double)heightWithoutText;
- (void)refreshHeightWithText:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
