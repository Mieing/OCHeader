@class NSString;

@interface AWEAIGCTOSCacheModel : NSObject

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *tos;
@property (readonly, nonatomic) double timestamp;

- (id)initWithFilePath:(id)a0 tos:(id)a1;
- (void).cxx_destruct;

@end
