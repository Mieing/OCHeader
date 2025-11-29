@class NSString, NSDictionary;

@interface BDUGLuckyActivityPageInfo : NSObject

@property (weak, nonatomic) id activityPage;
@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *backToSchema;
@property (copy, nonatomic) NSDictionary *rawParams;

- (id)initWithActivityPage:(id)a0 pageId:(id)a1 pageType:(id)a2 backToSchema:(id)a3 rawParams:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
