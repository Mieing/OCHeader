@class NSString;

@interface MMCommonCgiUploadInfo : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) long long fileType;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int sectionIndex;
@property (nonatomic) unsigned int sectionOffset;
@property (nonatomic) unsigned int sectionLength;

- (id)description;
- (void).cxx_destruct;

@end
