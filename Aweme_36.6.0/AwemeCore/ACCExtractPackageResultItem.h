@class NSString, NSDictionary;

@interface ACCExtractPackageResultItem : NSObject

@property (copy, nonatomic) NSString *zipPath;
@property (copy, nonatomic) NSString *bachPath;
@property (copy, nonatomic) NSString *zipURI;
@property (copy, nonatomic) NSString *bachURI;
@property (copy, nonatomic) NSDictionary *pictureIds;
@property (copy, nonatomic) NSString *resultId;
@property (copy, nonatomic) NSDictionary *extras;
@property (nonatomic) BOOL fromCache;
@property (nonatomic) unsigned long long subType;

- (BOOL)isValidForZip;
- (BOOL)isValidForPicture;
- (void).cxx_destruct;

@end
