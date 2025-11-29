@class NSString, NSArray, NSError, AWEIMChatListServiceExtTrackerModel;

@interface AWEIMChatListServiceResponseModel : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long reason;
@property (nonatomic) long long serviceType;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *serviceListModels;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEIMChatListServiceExtTrackerModel *trackerModel;

- (void).cxx_destruct;
- (id)description;

@end
