@class NSString;

@interface AWENewMusicModelAdapter : NSObject <AWENewMusicModelAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMusicOffLine:(id)a0;
+ (id)offLineDescription:(id)a0;
+ (id)extraModel:(id)a0;


@end
