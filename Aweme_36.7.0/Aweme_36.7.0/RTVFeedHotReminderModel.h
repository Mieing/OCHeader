@class NSString, NSDictionary;

@interface RTVFeedHotReminderModel : NSObject

@property (readonly, copy, nonatomic) NSString *tips;
@property (readonly, copy, nonatomic) NSString *feedItemID;
@property (readonly, copy, nonatomic) NSDictionary *rawModel;

- (id)initWithItemID:(id)a0 tips:(id)a1 rawModel:(id)a2;
- (void).cxx_destruct;

@end
