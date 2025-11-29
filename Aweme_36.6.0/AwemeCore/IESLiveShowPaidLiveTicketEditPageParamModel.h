@class NSString, NSDictionary, NSNumber, IESLiveShowPaidLiveTicketEditPageImageXInfoModel;

@interface IESLiveShowPaidLiveTicketEditPageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *uploadParams;
@property (copy, nonatomic) NSString *editContent;
@property (nonatomic) BOOL addimageDirectly;
@property (copy, nonatomic) NSString *imageURLPrefix;
@property (retain, nonatomic) NSNumber *pageHeight;
@property (retain, nonatomic) IESLiveShowPaidLiveTicketEditPageImageXInfoModel *imageXInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
