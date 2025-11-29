@class CJPayBindCardRetainInfo;

@interface CJPayPassCodeSetBaseViewModel : CJPayBindCardPageBaseModel

@property (retain, nonatomic) CJPayBindCardRetainInfo *retainInfo;
@property (nonatomic) BOOL isHadShowRetain;

+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
