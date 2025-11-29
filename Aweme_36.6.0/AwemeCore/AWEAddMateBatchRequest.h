@class NSArray, NSString;

@interface AWEAddMateBatchRequest : AWESocialRelationRequest

@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *applyMessage;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long fromAction;
@property (nonatomic) long long channelID;

- (void).cxx_destruct;

@end
