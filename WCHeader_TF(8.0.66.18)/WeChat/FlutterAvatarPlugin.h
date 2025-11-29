@class NSString, FlutterEventChannel;

@interface FlutterAvatarPlugin : NSObject <IHeadImageExt, MMFlutterPlugin, FlutterStreamHandler>

@property (retain, nonatomic) FlutterEventChannel *m_avatar_changed_event_channel;
@property (copy, nonatomic) id /* block */ m_avatar_changed_event_sink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void)onHeadImageChange:(id)a0;
- (void).cxx_destruct;

@end
