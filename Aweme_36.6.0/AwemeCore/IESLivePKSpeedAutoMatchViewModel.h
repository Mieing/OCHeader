@class IESLiveFixedFontTextSizeCache, NSString, HTSLivePKApi, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLivePKSpeedAutoMatchViewModel : NSObject <IESLivePKSpeedAutoMatchAction>

@property (retain, nonatomic) HTSLivePKApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *nameSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *userTagSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *roomTagSizeCache;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (nonatomic) unsigned long long autoMatchStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)rejectedByInvitee;
- (void)inviteSuccess;
- (void)setupItem:(id)a0 listType:(unsigned long long)a1 battleRival:(id)a2 requestID:(id)a3 listNum:(long long)a4;
- (void)fetchInviteeListWithCompletion:(id /* block */)a0;
- (void)updateInviteeItem;
- (void)updateViewModelWithResponseData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
