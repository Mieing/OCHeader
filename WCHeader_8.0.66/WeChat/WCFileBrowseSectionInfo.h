@class NSString, NSMutableArray;

@interface WCFileBrowseSectionInfo : NSObject

@property (retain, nonatomic) NSMutableArray *browseInfoArray;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) unsigned long long beginTime;
@property (nonatomic) unsigned long long endTime;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
