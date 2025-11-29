@class NSString, AWEAwemeModel;

@interface AWEIMSharePublishManager : NSObject <AWEIMSharePublishManagerProtocol>

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sharePublishedAweme:(id)a0 publishModel:(id)a1 enterFrom:(id)a2;

- (void).cxx_destruct;

@end
