@class NSString, AWEHPRealTimeActivityChannelInfo;

@interface AWEHPRealTimeActivityResourceModel : NSObject

@property (copy, nonatomic) NSString *resourceID;
@property (copy, nonatomic) NSString *cycleID;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) long long versionID;
@property (retain, nonatomic) AWEHPRealTimeActivityChannelInfo *channelInfo;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
