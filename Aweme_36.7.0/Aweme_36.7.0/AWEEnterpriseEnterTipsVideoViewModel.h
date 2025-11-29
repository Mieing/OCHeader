@class NSString, NSArray;

@interface AWEEnterpriseEnterTipsVideoViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel

@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSArray *imgURLList;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (void)transferToAwemeVideo;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)updateWithModel:(id)a0;

@end
