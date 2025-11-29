@class NSString;

@interface GetPcPanelBizDataResp_Tab : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bizData;

+ (id)descriptor;

@end
