@class NSString;

@interface ACCMusicBizHelper : NSObject <ACCMusicBizHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveMusicToUsed:(id)a0;
+ (void)saveMusicToUsedIfNeeded:(id)a0;


@end
