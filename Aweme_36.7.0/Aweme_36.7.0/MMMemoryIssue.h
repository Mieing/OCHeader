@class NSString, NSData, NSDictionary;

@interface MMMemoryIssue : NSObject

@property (copy, nonatomic) NSString *issueID;
@property (retain, nonatomic) NSData *issueData;
@property (retain, nonatomic) NSDictionary *customInfo;

- (void).cxx_destruct;
- (id)debugDescription;

@end
