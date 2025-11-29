@class NSString, NSDictionary;

@interface WCFinderCommentImageBrowseDataReportParams : NSObject

@property (nonatomic) unsigned long long pageId;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSDictionary *customReportDict;

- (id)initWithPageId:(unsigned long long)a0 pageName:(id)a1 customReportDict:(id)a2;
- (id)customReportDictWithCommentID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
