@class NSString, NSDictionary, CJPayAuthAgreementContentModel, NSArray;
@protocol CJPayMemAgreementModel;

@interface CJPayBizAuthInfoModel : JSONModel

@property (nonatomic) BOOL isNeedAuthorize;
@property (nonatomic) BOOL isAuthed;
@property (nonatomic) BOOL isConflict;
@property (copy, nonatomic) NSString *conflictActionURL;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *idCodeMask;
@property (copy, nonatomic) NSString *idNameMask;
@property (retain, nonatomic) CJPayAuthAgreementContentModel *authAgreementContentModel;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSString *protocolCheckBox;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)tipsContent;
- (id)disagreeContent;
- (void).cxx_destruct;

@end
