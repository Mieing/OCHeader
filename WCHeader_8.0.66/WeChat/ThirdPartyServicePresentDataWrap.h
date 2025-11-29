@class WAWxMaterialOpenInfo, CMessageWrap;

@interface ThirdPartyServicePresentDataWrap : NSObject

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) WAWxMaterialOpenInfo *openInfo;

- (void).cxx_destruct;

@end
