@class NSDictionary, NSString;

@interface AWEFeedDoubleColumnTidyModelInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *queryParams;
@property (retain, nonatomic) NSDictionary *bodyParams;
@property (retain, nonatomic) NSString *preLogID;
@property (retain, nonatomic) NSString *preItemIDs;
@property (retain, nonatomic) NSString *preItemFrom;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
