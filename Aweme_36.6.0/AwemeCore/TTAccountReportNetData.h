@class NSString;

@interface TTAccountReportNetData : NSObject

@property (retain, nonatomic) NSString *reportData;
@property (nonatomic) long long signal;
@property (nonatomic) long long sceneId;

- (id)buildParams;
- (void).cxx_destruct;

@end
