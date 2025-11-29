@class NSNumber, NSString, IESLiveUpdateRoomInfoApi;

@interface IESLiveAnchorSharePreferenceIMP : NSObject <IESLiveAnchorSharePreferenceService>

@property (retain, nonatomic) IESLiveUpdateRoomInfoApi *updateRoomInfoApi;
@property (readonly, nonatomic) NSNumber *shareAuthNumForRequest;
@property (nonatomic) BOOL allowShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
