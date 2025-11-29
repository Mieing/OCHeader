@class NSString, AWEIMSkylightBizInfoDataModel;

@interface AWEIMSkylightFlashBackInfoDataModel : AWEIMSkylightBizInfoDataModel

@property (nonatomic) unsigned long long flashBackType;
@property (copy, nonatomic) NSString *storageIdentifier;
@property (retain, nonatomic) AWEIMSkylightBizInfoDataModel *originBizModel;
@property (readonly, nonatomic) BOOL isFromLocal;
@property (readonly, nonatomic) BOOL isOwnPhoto;
@property (nonatomic) BOOL onlyThemes;
@property (copy, nonatomic) NSString *themeID;
@property (nonatomic) BOOL isGeneralPost;
@property (nonatomic) BOOL shouldReportShowRecord;

+ (BOOL)supportsSecureCoding;

- (id)getContentDict;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
