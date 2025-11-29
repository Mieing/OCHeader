@class DVEVCContext, NSString;
@protocol DVETrackEventProtocol, DVETrackContextProtocol;

@interface DVETrackManager : NSObject <DVETrackContextProtocol, DVETrackEventProtocol>

@property (weak, nonatomic) id<DVETrackEventProtocol> trackEventManager;
@property (nonatomic) BOOL isSyncPage;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<DVETrackContextProtocol> trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
