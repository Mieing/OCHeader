@class NSString, AWENewHotSpotFeedCardModel;

@interface AWENewHotSpotCommentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *hotSpotServiceID;
@property (nonatomic) long long hotSpotPageTab;
@property (nonatomic) BOOL hasImageBtnExposed;
@property (copy, nonatomic) NSString *fromGroupID;
@property (retain, nonatomic) AWENewHotSpotFeedCardModel *commentCardModel;
@property (copy, nonatomic) NSString *hotSpotCommentSchema;
@property (copy, nonatomic) NSString *inputPlaceholder;

- (id)initWithHotSpotID:(id)a0 keyword:(id)a1 hotSpotServiceID:(id)a2 hotSpotPageTab:(long long)a3;
- (void).cxx_destruct;

@end
