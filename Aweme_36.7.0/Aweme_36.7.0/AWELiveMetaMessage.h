@class NSString, AWELiveMetaHost;

@interface AWELiveMetaMessage : AWELivePreMessage

@property (nonatomic) long long type;
@property (retain, nonatomic) AWELiveMetaHost *host;
@property (retain, nonatomic) NSString *content;

- (void).cxx_destruct;

@end
