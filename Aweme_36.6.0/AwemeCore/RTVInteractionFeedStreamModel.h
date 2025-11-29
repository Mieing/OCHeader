@class NSString, AWEListDataController;

@interface RTVInteractionFeedStreamModel : NSObject

@property (readonly, nonatomic) long long initialStreamType;
@property (readonly, nonatomic) AWEListDataController *initialDataController;
@property (readonly, nonatomic) NSString *initialItemID;

- (id)initWithStreamType:(long long)a0 dataController:(id)a1 itemID:(id)a2;
- (void).cxx_destruct;

@end
