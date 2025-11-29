@class NSString;

@interface BDECRabbiFlyViewLoadMetric : NSObject <NSCopying>

@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL isReload;
@property (nonatomic) long long cardStateWhenOnScreen;
@property (nonatomic) long long dataStateWhenOnScreen;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
