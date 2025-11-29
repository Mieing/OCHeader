@class NSString, BDLynxChannelIOSConfig;

@interface BDLyxnChannelConfig : BDLynxBaseConfig

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) BDLynxChannelIOSConfig *iOSConfig;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
