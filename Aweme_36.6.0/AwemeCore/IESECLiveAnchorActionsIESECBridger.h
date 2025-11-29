@class NSString;
@protocol HTSLiveAnchorActions;

@interface IESECLiveAnchorActionsIESECBridger : NSObject <IESECLiveAnchorActions>

@property (retain, nonatomic) id<HTSLiveAnchorActions> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)willEnterNewVCWithoutPause;
- (void).cxx_destruct;

@end
