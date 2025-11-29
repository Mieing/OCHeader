@class NSString;

@interface IESLiveSearchPlaceHolderManager : NSObject <IESLiveReferenceActions>

@property (nonatomic) BOOL useRemote;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *curPlaceHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didSetAttachingDIContext;
- (void)didLeaveAudienceRoom;
- (id)getNextSearchPlaceHolder;
- (BOOL)canSearchWithPlaceHolder;
- (id)getCurSearchPlaceHolder;
- (void)updateDisposable;
- (void).cxx_destruct;

@end
