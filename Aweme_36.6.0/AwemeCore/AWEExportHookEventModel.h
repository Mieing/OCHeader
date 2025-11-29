@class NSString, NSDictionary;

@interface AWEExportHookEventModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) double time;

- (id)toReportDic;
- (void).cxx_destruct;

@end
