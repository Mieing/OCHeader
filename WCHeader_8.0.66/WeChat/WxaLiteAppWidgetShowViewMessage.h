@class NSString, NSNumber, NSArray;

@interface WxaLiteAppWidgetShowViewMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *referrerInfo;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *signatureKey;
@property (retain, nonatomic) NSNumber *appUuid;
@property (retain, nonatomic) NSNumber *isTransparent;
@property (copy, nonatomic) NSString *sourceType;
@property (retain, nonatomic) NSArray *enableActions;
@property (retain, nonatomic) NSArray *enableViews;
@property (retain, nonatomic) NSNumber *openId;

+ (id)makeWithAppId:(id)a0 page:(id)a1 query:(id)a2 referrerInfo:(id)a3 path:(id)a4 signatureKey:(id)a5 appUuid:(id)a6 isTransparent:(id)a7 sourceType:(id)a8 enableActions:(id)a9 enableViews:(id)a10 openId:(id)a11;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
