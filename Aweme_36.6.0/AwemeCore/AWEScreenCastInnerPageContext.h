@class NSString, NSDictionary, NSNumber;

@interface AWEScreenCastInnerPageContext : NSObject

@property (copy, nonatomic) NSString *firstAwemeID;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *enterScene;
@property (copy, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchId;

- (void).cxx_destruct;

@end
