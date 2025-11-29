@class NSString;

@interface HTSLiveFilterReason : IESLivePBBaseMessage

@property (nonatomic) BOOL failed;
@property (nonatomic) BOOL canShow;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) int werrCode;
@property (copy, nonatomic) NSString *filterName;

+ (id)descriptor;

@end
