@class NSArray, AEKMultiEditorPlayer_OC;
@protocol AEKMultiEditorPlayerProtocol;

@interface AEKMediaSession_OC : NSObject

@property (retain, nonatomic) AEKMultiEditorPlayer_OC *pMultiPlayer;
@property (readonly, nonatomic) id<AEKMultiEditorPlayerProtocol> multiPlayer;
@property (copy, nonatomic) NSArray *nles;

- (void).cxx_destruct;

@end
