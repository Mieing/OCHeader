@class NSString, NSNumber;

@interface BizCdnUploadTaskCallback : NSObject

@property (copy, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSNumber *callbackType;
@property (copy, nonatomic) NSString *fileId;
@property (copy, nonatomic) NSString *aeskey;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSNumber *errCode;
@property (copy, nonatomic) NSString *thumb_url;

+ (id)makeWithMediaId:(id)a0 callbackType:(id)a1 fileId:(id)a2 aeskey:(id)a3 url:(id)a4 offset:(id)a5 total:(id)a6 errCode:(id)a7 thumb_url:(id)a8;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
