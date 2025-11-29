@class NSDictionary, NSString;

@interface XPlayBusinessFollow : NSObject <XPlayFollowProtocol>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *followUserId;
@property (nonatomic) long long from;
@property (nonatomic) long long fromPre;
@property (nonatomic) long long channelId;
@property (nonatomic) BOOL isFollowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followWithDic:(id)a0;

- (void).cxx_destruct;

@end
