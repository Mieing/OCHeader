@class NSString, NSDictionary;

@interface WCFinderTemplateKVReportModel : NSObject

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) BOOL isCameraTemplate;
@property (retain, nonatomic) NSDictionary *optionalUdfInfo;

- (id)genUdfDict;
- (void).cxx_destruct;

@end
