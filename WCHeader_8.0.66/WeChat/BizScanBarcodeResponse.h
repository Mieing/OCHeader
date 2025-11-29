@class NSString, NSMutableArray, BaseResponse;

@interface BizScanBarcodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descXml;
@property (retain, nonatomic) NSMutableArray *wordingList;

+ (void)initialize;

@end
