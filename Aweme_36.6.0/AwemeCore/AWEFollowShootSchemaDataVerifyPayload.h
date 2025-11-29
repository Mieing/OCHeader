@class NSString, NSDictionary, AWEFollowShootDataVerifyPageContext;

@interface AWEFollowShootSchemaDataVerifyPayload : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEFollowShootDataVerifyPageContext *pageContext;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
