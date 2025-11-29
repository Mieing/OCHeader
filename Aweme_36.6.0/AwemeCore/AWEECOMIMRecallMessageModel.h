@class NSString, NSAttributedString, YYTextLayout;

@interface AWEECOMIMRecallMessageModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *timeOfRecalled;
@property (copy, nonatomic) id /* block */ messageReEditCallBack;
@property (readonly, copy, nonatomic) NSAttributedString *recallText;
@property (readonly, nonatomic) YYTextLayout *textLayout;
@property (readonly, nonatomic) BOOL canReEdit;

+ (Class)cellClass;

- (BOOL)checkIfSupportRecall;
- (void)updateTextWithIsShowEditText;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
