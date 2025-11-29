@class NSString;

@interface MPChannelGetEntryDataReq : MMObject

@property (copy, nonatomic) NSString *syncBuffer;
@property (copy, nonatomic) NSString *bizUsername;
@property (copy, nonatomic) NSString *videoPageUrl;
@property (nonatomic) unsigned int scene;

- (void).cxx_destruct;

@end
