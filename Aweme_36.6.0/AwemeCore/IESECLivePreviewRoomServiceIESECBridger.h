@class NSString;
@protocol IESLivePreviewRoomService;

@interface IESECLivePreviewRoomServiceIESECBridger : NSObject <IESECLivePreviewRoomService>

@property (retain, nonatomic) id<IESLivePreviewRoomService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (BOOL)isPreStream;
- (void).cxx_destruct;

@end
