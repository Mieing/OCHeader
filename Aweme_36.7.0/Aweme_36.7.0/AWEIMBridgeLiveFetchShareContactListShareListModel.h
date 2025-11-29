@class NSString, NSArray;

@interface AWEIMBridgeLiveFetchShareContactListShareListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *avatarUrlList;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUserId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
