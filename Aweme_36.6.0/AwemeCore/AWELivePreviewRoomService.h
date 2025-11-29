@class NSString;

@interface AWELivePreviewRoomService : NSObject <IESLivePreviewRoomService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPreStream;

@end
