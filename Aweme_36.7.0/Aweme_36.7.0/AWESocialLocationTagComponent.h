@class NSString, NSArray, UIView, NSMutableArray, AWEPlayInteractionBaseElement;
@protocol AWENearbyAuthorProtocol;

@interface AWESocialLocationTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSString *tagInfoType;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSMutableArray<AWENearbyAuthorProtocol> *tagsArray;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;

- (long long)tagWidth;
- (void)appendCommentTrackParams;
- (void)onNearbyFeedVideoPlay:(id)a0;
- (id)commonParamsWithModel:(id)a0 awemeModel:(id)a1;
- (void)postIdentityInfoTypeShowWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
