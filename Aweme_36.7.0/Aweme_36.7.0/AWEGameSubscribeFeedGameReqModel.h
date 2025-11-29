@class NSString;

@interface AWEGameSubscribeFeedGameReqModel : NSObject

@property (nonatomic) BOOL to_subscribe;
@property (copy, nonatomic) NSString *mp_id;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL sub_all;
@property (nonatomic) BOOL un_sub_all;

- (void).cxx_destruct;

@end
