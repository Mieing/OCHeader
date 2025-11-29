@class NSString, NSData;

@interface WCFinderMemberShipIntroduceListData : NSObject

@property (nonatomic) unsigned long long otherVideoNum;
@property (nonatomic) unsigned long long otherLiveNum;
@property (nonatomic) unsigned long long videoShortNum;
@property (nonatomic) unsigned long long liveShortNum;
@property (nonatomic) unsigned long long memberPrice;
@property (nonatomic) unsigned long long autoMemberPrice;
@property (copy, nonatomic) NSString *wecoinProductId;
@property (nonatomic) BOOL autoRenewSwitch;
@property (retain, nonatomic) NSData *lastBuffer;

- (void).cxx_destruct;

@end
