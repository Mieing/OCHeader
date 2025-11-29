@class NSString, NSDictionary;

@interface ACCFileUploadResponseInfoModel : NSObject

@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSString *coverURI;
@property (copy, nonatomic) NSDictionary *videoMediaInfo;
@property (copy, nonatomic) NSDictionary *materialIDMap;

- (void).cxx_destruct;

@end
