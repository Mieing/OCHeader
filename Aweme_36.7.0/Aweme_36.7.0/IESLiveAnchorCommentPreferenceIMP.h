@class NSNumber, NSString, IESLiveUpdateRoomInfoApi;

@interface IESLiveAnchorCommentPreferenceIMP : NSObject <IESLiveAnchorCommentPreferenceService>

@property (retain, nonatomic) IESLiveUpdateRoomInfoApi *updateRoomInfoApi;
@property (readonly, nonatomic) NSNumber *commentAuthNumForRequest;
@property (nonatomic) BOOL allowComment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
