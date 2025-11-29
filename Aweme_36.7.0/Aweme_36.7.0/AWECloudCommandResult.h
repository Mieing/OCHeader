@class NSString, NSArray, NSData, NSDictionary, NSNumber;

@interface AWECloudCommandResult : NSObject

@property (retain, nonatomic) NSNumber *commandId;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *fileType;
@property (nonatomic) long long operateTimestamp;
@property (nonatomic) BOOL isMultiData;
@property (copy, nonatomic) NSArray *multiDataArray;
@property (retain, nonatomic) NSDictionary *additionalUploadParams;
@property (copy, nonatomic) id /* block */ uploadSuccessedBlock;
@property (copy, nonatomic) id /* block */ uploadFailedBlock;

- (void).cxx_destruct;
- (id)init;

@end
