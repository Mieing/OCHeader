@class NSString, AWEURLModel;

@interface AWEVCDImportFansModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *hotsoonIconURL;

+ (id)hotsoonIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
