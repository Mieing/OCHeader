@class NSString;

@interface AWEIMSharePanelTrackIDGenerator : NSObject <AWEIMSharePanelTrackIDGeneratorProtocol>

@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *localTimeMs;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *messageType;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *previousMethod;
@property (retain, nonatomic) NSString *videoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelID;
- (id)initWithUID:(id)a0 shareContext:(id)a1 shareImpl:(id)a2;
- (id)uniqueIDWithShareImpl:(id)a0;
- (id)messageTypeWithShareImpl:(id)a0;
- (id)uniqueIDWithShareContext:(id)a0;
- (id)messageTypeWithShareContext:(id)a0;
- (id)previousPageWithShareContext:(id)a0;
- (id)previousMethodWithShareContext:(id)a0;
- (id)videoTypeWithShareContext:(id)a0;
- (id)uniqueIDWithShareImageContext:(id)a0;
- (id)uniqueIDWithMessage:(id)a0;
- (id)messageTypeFromSceneType:(long long)a0 targetType:(unsigned long long)a1;
- (id)messageTypeFromTargetType:(unsigned long long)a0;
- (id)nextPanelID;
- (void).cxx_destruct;
- (id)next;

@end
