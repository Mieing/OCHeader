@class NSString, NSDictionary;

@interface AWELongVideoFeedShareManager : NSObject <AWELongVideoFeedShareManagerProtocol>

@property (copy, nonatomic) NSString *feedShareWindowAddr;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
