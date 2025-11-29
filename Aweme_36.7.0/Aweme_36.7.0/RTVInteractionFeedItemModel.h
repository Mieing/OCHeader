@class NSString, NSDictionary, NSNumber;

@interface RTVInteractionFeedItemModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *rawModel;
@property (readonly, nonatomic) NSNumber *itemType;

- (id)initWithItemID:(id)a0 itemType:(id)a1 rawModel:(id)a2;
- (void).cxx_destruct;

@end
