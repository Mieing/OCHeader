@class CJPayQuickPayCardModel, NSArray, NSString, NSDictionary, CJPayCardSignInfoModel;

@interface CJPayCardUpdateModel : NSObject

@property (copy, nonatomic) NSArray *agreements;
@property (retain, nonatomic) CJPayQuickPayCardModel *cardModel;
@property (retain, nonatomic) CJPayCardSignInfoModel *cardSignInfo;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSDictionary *context;

- (void).cxx_destruct;

@end
