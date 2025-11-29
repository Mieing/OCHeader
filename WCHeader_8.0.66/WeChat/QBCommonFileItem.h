@class NSString;

@interface QBCommonFileItem : NSObject

@property (retain, nonatomic) NSString *moduleName;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileUrl;
@property (retain, nonatomic) NSString *fileContentMd5;
@property (retain, nonatomic) NSString *fileContentSignature;
@property (retain, nonatomic) NSString *fileEncryptAlgorithm;

+ (id)itemWupObj:(id)a0 moduleName:(id)a1;
+ (id)itemWithInfo:(id)a0;

- (void).cxx_destruct;

@end
