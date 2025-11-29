@class NSString, NSDictionary;

@interface IESLivePortalLogNodeLogInfo : NSObject

@property (copy, nonatomic) NSString *logInfo;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)logInfo:(id)a0 extra:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
