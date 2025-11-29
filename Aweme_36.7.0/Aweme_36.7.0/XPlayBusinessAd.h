@class NSString, NSDictionary;

@interface XPlayBusinessAd : NSObject

@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *gId;
@property (copy, nonatomic) NSDictionary *gameExtra;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)adWithDic:(id)a0;

- (id)adRequestParams;
- (void).cxx_destruct;

@end
