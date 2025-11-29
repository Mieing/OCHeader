@class NSData, NSString;

@interface WCFinderNewApplyMicParams : NSObject

@property (retain, nonatomic) NSData *randomMicBuffer;
@property (nonatomic) unsigned int applyScene;
@property (retain, nonatomic) NSData *sceneBuffer;
@property (retain, nonatomic) NSString *candidateRequestId;

- (id)init;
- (void).cxx_destruct;

@end
