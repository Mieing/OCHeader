@class NSString, UIFont, NSMutableArray;

@interface BTRecommendMsgCellViewModel : BTBaseRecommendAppMsgCellViewModel

@property (readonly, copy, nonatomic) NSString *msgTitle;
@property (readonly, copy, nonatomic) NSString *bizNickName;
@property (readonly, copy, nonatomic) NSString *bizUserName;
@property (readonly, copy, nonatomic) NSString *headerUrl;
@property (readonly, copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSString *recommendReason;
@property (readonly, copy, nonatomic) NSString *appMsgRecommendReason;
@property (readonly, copy, nonatomic) NSString *appMsgTitle;
@property (readonly, copy, nonatomic) NSString *appMsgDigest;
@property (readonly, nonatomic) BOOL appMsgDeleted;
@property (readonly, nonatomic) BOOL isExposed;
@property (readonly, nonatomic) UIFont *msgTitleFont;
@property (readonly, nonatomic) double headIconSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } signatureLabelSize;
@property (readonly, nonatomic) NSMutableArray *signatureLabelStyles;
@property (readonly, nonatomic) struct CGSize { double width; double height; } appMsgTitleLabelSize;
@property (readonly, nonatomic) NSMutableArray *appMsgTitleLabelStyles;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (void)updateWithMsgWrap:(id)a0 contact:(id)a1 viewWidth:(double)a2;
- (double)viewHeight;
- (id)itemViewClassName;
- (id)accountData;
- (id)feedbackInfo;
- (void)clearCache;
- (void).cxx_destruct;

@end
