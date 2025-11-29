@class NSString, NSDictionary, IESECNativePrefetchRes;

@interface IESECTabKitPrefetchRequest : NSObject

@property (copy, nonatomic) NSString *urlPath;
@property (copy, nonatomic) NSDictionary *query;
@property (nonatomic) double requestTime;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *requestFrom;
@property (copy, nonatomic) NSDictionary *extraPerfTiming;
@property (retain, nonatomic) IESECNativePrefetchRes *prefetchRes;
@property (nonatomic) unsigned long long state;

- (id)initWithTargetUrl:(id)a0 prefetchRes:(id)a1;
- (BOOL)compareRequestWithTargetUrl:(id)a0;
- (void).cxx_destruct;
- (BOOL)isExpired;

@end
