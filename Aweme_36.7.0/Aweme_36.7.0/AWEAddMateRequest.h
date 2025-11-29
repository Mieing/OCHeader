@class NSString, AWEUserModel;

@interface AWEAddMateRequest : AWESocialRelationRequest

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *applyMessage;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long fromAction;
@property (nonatomic) long long channelID;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
