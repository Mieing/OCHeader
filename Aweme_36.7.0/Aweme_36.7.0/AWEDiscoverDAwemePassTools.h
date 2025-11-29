@class NSString;

@interface AWEDiscoverDAwemePassTools : NSObject <AWEDiscoverDAwemePassToolsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeTypeWhiteListForLive;
+ (BOOL)shouldRevertLiveAwemePass;
+ (BOOL)isLiveServiceEnabled;
+ (BOOL)isLiveAwemeType:(long long)a0;


@end
