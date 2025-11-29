@class NSMutableDictionary;

@interface __BlueDevice : NSObject

@property (nonatomic) unsigned int m_deviceMode;
@property (nonatomic) long long m_deviceId;
@property (retain, nonatomic) NSMutableDictionary *m_channels;
@property (retain, nonatomic) NSMutableDictionary *m_stopingChannels;

- (id)init;
- (id)getOneChannel;
- (void).cxx_destruct;

@end
