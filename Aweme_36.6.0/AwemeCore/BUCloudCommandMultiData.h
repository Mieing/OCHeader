@class NSString, NSData;

@interface BUCloudCommandMultiData : NSObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *fileType;

- (void).cxx_destruct;

@end
