@class NSArray;
@protocol IESIMConversationProtocol;

@interface AWEIMLiveGroupInfo : NSObject

@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic) long long numberOfPeople;
@property (retain, nonatomic) NSArray *groupUsers;
@property (weak, nonatomic) id<IESIMConversationProtocol> con;

- (void).cxx_destruct;

@end
