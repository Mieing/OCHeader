@class NSString, NSMutableDictionary;

@interface HMDFolderInfoModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *reportType;
@property (nonatomic) BOOL isUserCustomPath;
@property (nonatomic) BOOL isFolder;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL includeFolder;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) NSMutableDictionary *childs;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
