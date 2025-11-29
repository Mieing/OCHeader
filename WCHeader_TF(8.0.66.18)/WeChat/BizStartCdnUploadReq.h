@class NSString, NSNumber;

@interface BizStartCdnUploadReq : NSObject

@property (copy, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSNumber *fileType;
@property (retain, nonatomic) NSNumber *appType;
@property (copy, nonatomic) NSString *fullPath;
@property (retain, nonatomic) NSNumber *bizScene;
@property (copy, nonatomic) NSString *thumbPath;
@property (copy, nonatomic) NSString *custom_header;

+ (id)makeWithMediaId:(id)a0 fileType:(id)a1 appType:(id)a2 fullPath:(id)a3 bizScene:(id)a4 thumbPath:(id)a5 custom_header:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
