@class NSString;

@interface AWEMusicEntryServer : HTSService <AWEMusicStreamingEntryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setMusicEntryServerURL:(id)a0 withDict:(id)a1;


@end
