@class NSString, AWEUserModel, NSArray;

@interface AWENoticeAuthorItem : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *relationText;
@property (nonatomic) long long labelType;
@property (nonatomic) BOOL isVcdAuth;
@property (copy, nonatomic) NSArray *fansTagArray;

- (void)_processFansTagArray:(id)a0 model:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
