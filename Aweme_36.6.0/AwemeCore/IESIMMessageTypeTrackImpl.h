@class NSString;

@interface IESIMMessageTypeTrackImpl : NSObject <IESIMMessageTypeTrackInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isSystemEmojiType:(long long)a0 content:(id)a1;

@end
