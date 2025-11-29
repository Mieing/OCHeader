@class NSString;

@interface KSLogger : NSObject <KSAudioLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)log:(int)a0 file:(const char *)a1 func:(const char *)a2 line:(int)a3 module:(id)a4 EFDict:(id)a5 fullmsg:(id)a6;

@end
