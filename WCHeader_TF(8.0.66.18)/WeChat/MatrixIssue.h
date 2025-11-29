@class NSString, NSData, NSDictionary;

@interface MatrixIssue : NSObject

@property (copy, nonatomic) NSString *issueTag;
@property (copy, nonatomic) NSString *issueID;
@property (nonatomic) unsigned long long dataType;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSData *issueData;
@property (nonatomic) int reportType;
@property (retain, nonatomic) NSDictionary *customInfo;

- (id)description;
- (void).cxx_destruct;

@end
