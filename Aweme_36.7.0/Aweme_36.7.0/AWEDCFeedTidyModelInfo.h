@class NSDictionary, NSString;

@interface AWEDCFeedTidyModelInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *queryParams;
@property (retain, nonatomic) NSDictionary *bodyParams;
@property (retain, nonatomic) NSString *preLogID;
@property (retain, nonatomic) NSString *preItemIDs;
@property (retain, nonatomic) NSString *preItemFrom;
@property (retain, nonatomic) NSDictionary *extraInfoDict;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
