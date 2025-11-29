@class NSString, NSDate;

@interface lzCommCacheFileData : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) NSDate *modifyDate;
@property (nonatomic) long long fileSize;
@property (nonatomic) BOOL bHidden;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL bIgnor;

- (void).cxx_destruct;

@end
