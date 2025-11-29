@class IESLiveEnterRoomAisle, NSString;
@protocol HTSLiveRoomCollectionDataObserver;

@interface IESLiveRoomInnerFeedContainerStore : NSObject <IESLiveRoomInnerFeedContainerService, HTSLiveRoomCollectionDelegate>

@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;

- (id)innerFeedURL;
- (id)innerFeedRequestFrom;
- (BOOL)enableInnerScrollForEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)enableInnerScrollForEnterFrom:(id)a0 enterMethod:(id)a1 force:(BOOL)a2;
- (id)innerScrollSourceKeyForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)innerScrollSourceKeyForEnterFrom:(id)a0 enterMethod:(id)a1 force:(BOOL)a2;
- (id)innerPathForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)initWithRoomAisle:(id)a0;
- (id)p_innerUrlKeyPathForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)p_innerUrlKeyPathForEnterFrom:(id)a0 enterMethod:(id)a1 force:(BOOL)a2;
- (id)p_enableInnerScrollConfig;
- (unsigned long long)p_matchForEnterFrom:(id)a0 enterMethod:(id)a1 sourceKey:(id)a2;
- (void).cxx_destruct;

@end
