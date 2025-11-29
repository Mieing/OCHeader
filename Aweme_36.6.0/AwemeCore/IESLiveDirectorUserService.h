@class NSString, NSMutableArray;
@protocol IESLiveInteractUserModel;

@interface IESLiveDirectorUserService : NSObject <IESLiveInteractiveUserService>

@property (retain, nonatomic) NSString *linkId;
@property (retain, nonatomic) NSString *anchorLinkId;
@property (nonatomic) BOOL isSubDevice;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> anchorInteractUserModel;
@property (readonly, nonatomic) NSMutableArray *activedList;
@property (retain, nonatomic) id<IESLiveInteractUserModel> host;
@property (retain, nonatomic) id<IESLiveInteractUserModel> me;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUser:(id)a0 linkId:(id)a1 anchorLinkId:(id)a2 isSubDevice:(BOOL)a3;
- (void)setUpService:(id)a0;
- (void).cxx_destruct;

@end
