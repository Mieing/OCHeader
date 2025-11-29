@class NSString, NSMutableArray;

@interface AWESearchClientTagsManager : NSObject

@property (copy, nonatomic) NSString *currentSearchID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableArray *uploadedTags;

- (id)initWithEnterFrom:(id)a0;
- (void)uploadTags:(id)a0 forSearchID:(id)a1;
- (void)reportDocIDListWithRawData:(id)a0;
- (void).cxx_destruct;

@end
