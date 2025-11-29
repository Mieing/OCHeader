@class NSString, NSArray, CJPayAuthDisplayContentModel;
@protocol CJPayAuthDisplayMultiContentModel, CJPayAuthDisplayContentModel;

@interface CJPayAuthAgreementContentModel : JSONModel

@property (retain, nonatomic) CJPayAuthDisplayContentModel *businessBriefInfo;
@property (copy, nonatomic) NSString *proposeDesc;
@property (copy, nonatomic) NSArray *proposeContents;
@property (copy, nonatomic) NSArray<CJPayAuthDisplayContentModel> *agreementContents;
@property (copy, nonatomic) NSArray<CJPayAuthDisplayMultiContentModel> *secondAgreementContents;
@property (copy, nonatomic) NSString *disagreeUrl;
@property (copy, nonatomic) NSString *disagreeContent;
@property (copy, nonatomic) NSString *tipsContent;
@property (nonatomic) long long authorizeItem;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
