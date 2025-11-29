@class NSString, NSDictionary;

@interface IESLiveIMRoomConfig : NSObject

@property (nonatomic) long long bizUniqueToken;
@property (copy, nonatomic) NSString *bizIdentity;
@property (copy, nonatomic) NSString *roomIdentity;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSDictionary *customParams;

- (void).cxx_destruct;

@end
