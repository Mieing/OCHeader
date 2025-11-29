@class WCLabsEntryTipsConfigItem, NSString, NSDictionary;

@interface WCLabsEntryTipsItem : NSObject

@property (retain, nonatomic) WCLabsEntryTipsConfigItem *config;
@property (readonly, nonatomic) NSString *tips;
@property (readonly, nonatomic) NSDictionary *jumpPluginInfo;
@property (readonly, nonatomic) NSString *packetName;
@property (readonly, nonatomic) int installPriority;
@property (readonly, nonatomic) int installState;

- (id)initWithConfig:(id)a0;
- (void)onShow;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
