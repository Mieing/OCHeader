@class WCDevice, MaterialRecommWxaCard;

@interface WCActionSheetRecentItem : MMObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MaterialRecommWxaCard *card;
@property (retain, nonatomic) WCDevice *device;
@property (nonatomic) unsigned int lastUsedTime;

- (void).cxx_destruct;

@end
