@class NSString, NSDictionary;

@interface GlobalSearchInputSheetConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *liteAppPath;
@property (copy, nonatomic) NSString *liteAppId;
@property (copy, nonatomic) NSDictionary *liteAppQuery;
@property (nonatomic) BOOL isTransparent;
@property (copy, nonatomic) NSString *minVersion;

- (id)description;
- (void).cxx_destruct;

@end
