@class AWECommentModel, NSString, NSDictionary;

@interface AWEIMHotSpotCommentModel : NSObject <NSCoding>

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *authorSecUid;
@property (nonatomic) BOOL commentUnavailable;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)initWithCommentModel:(id)a0 hotSpotID:(id)a1 schema:(id)a2 authorSecUid:(id)a3 extraParams:(id)a4;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
