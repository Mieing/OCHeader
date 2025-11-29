@class NSArray, NSString;

@interface AWEDCFeedImageModel : NSObject

@property (copy, nonatomic) NSArray *coverUrlList;
@property (copy, nonatomic) NSArray *avatarUrlList;
@property (copy, nonatomic) NSString *itemID;

- (id)initWithItemID:(id)a0 coverUrlList:(id)a1 avatarUrlList:(id)a2;
- (void).cxx_destruct;

@end
