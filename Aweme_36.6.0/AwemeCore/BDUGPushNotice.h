@class NSArray, BDUGPushMuteStatus;

@interface BDUGPushNotice : NSObject

@property (nonatomic) long long isMainSwitchClosed;
@property (retain, nonatomic) NSArray *sceneSwitchList;
@property (retain, nonatomic) BDUGPushMuteStatus *muteStatus;

- (void)mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;
- (id)toJSON;

@end
