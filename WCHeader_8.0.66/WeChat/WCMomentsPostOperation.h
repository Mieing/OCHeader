@class NSString, NSError;

@interface WCMomentsPostOperation : NSObject <NSCopying>

@property (retain, nonatomic) NSString *compositionId;
@property (nonatomic) long long source;
@property (nonatomic) long long feedType;
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (nonatomic) BOOL isSuccessful;
@property (nonatomic) long long failedCount;
@property (retain, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
