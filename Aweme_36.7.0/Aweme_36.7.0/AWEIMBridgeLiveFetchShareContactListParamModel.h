@class NSNumber;

@interface AWEIMBridgeLiveFetchShareContactListParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL filterNotFriendUser;
@property (nonatomic) BOOL filterGroupChat;
@property (retain, nonatomic) NSNumber *filterCount;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
