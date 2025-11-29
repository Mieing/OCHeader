@class NSString, AWEVideoPublishViewModel;

@interface ACCTCESlidesTrackEventService : NSObject <ACCTCETrackEventServiceProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 eventParam:(id)a1 needCommonParams:(BOOL)a2;
- (void)getPieceResourceTypeNumberWithImageCNT:(unsigned long long *)a0 videoCNT:(unsigned long long *)a1 pieceArray:(id)a2;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
