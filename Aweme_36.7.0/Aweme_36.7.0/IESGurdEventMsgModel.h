@class NSString;

@interface IESGurdEventMsgModel : NSObject

@property (nonatomic) int subType;
@property (nonatomic) int count;
@property (nonatomic) long long duration;
@property (nonatomic) long long extraNumber;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channels;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;
- (id)init;

@end
